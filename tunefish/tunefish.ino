#include "arduinoFFT.h"
#include "tones_lookup.h"

arduinoFFT FFT = arduinoFFT(); /* Create FFT object */
/*
These values can be changed in order to evaluate the functions
*/
const uint16_t samples = 2048; // This value MUST ALWAYS be a power of 2
const double samplingFrequency = 5000;
/*
These are the input and output vectors
Input vectors receive computed results from FFT
*/
double vReal[samples];
double vImag[samples];

// Frequency generator
uint16_t genAmplitude = 2000;
uint16_t genOffset = 2047;
double genFrequency = 0.0;
double genFrequencyStep = 1;
double t = 0;
double deltaT = 1 / samplingFrequency;

void updateValues()
{
  genFrequency += genFrequencyStep;
  for (uint16_t i; i < samples; i++)
  {
    double currentT = t + i * deltaT;
    vReal[i] = genAmplitude * sin(2 * PI * genFrequency + currentT) + genOffset;
  }
  t += deltaT;
}

void setup()
{
  Serial.begin(115200);
  while (!Serial)
    ;
  Serial.println("Ready");
  updateValues();
}

void calculateFFT()
{
  /* Print the results of the simulated sampling according to time */
  FFT.Windowing(vReal, samples, FFT_WIN_TYP_HAMMING, FFT_FORWARD); /* Weigh data */
  FFT.Compute(vReal, vImag, samples, FFT_FORWARD);                 /* Compute FFT */
  FFT.DCRemoval();
  FFT.ComplexToMagnitude(vReal, vImag, samples); /* Compute magnitudes */
}

void loop()
{
  calculateFFT();
  Serial.print("Current frequency: ");
  Serial.print(genFrequency);
  Serial.println("Hz");
  Serial.print("Peak: ");
  double foundFrequency = FFT.MajorPeakQuinnsEstimator();
  Serial.print(foundFrequency);
  Serial.println("Hz");
  updateValues();
  // double x = FFT.MajorPeak(vReal, samples, samplingFrequency);
  //Serial.println(millis());
  auto lookup = tones_lookup::get_nearest_tone(foundFrequency);
  Serial.print("Tone: ");
  Serial.print(lookup.name);
  Serial.print(" (");
  Serial.print(lookup.frequency);
  Serial.print("Hz, ");
  Serial.print(lookup.delta_in_cents);
  Serial.println("Cent)");
  Serial.println("===============================================");
}
