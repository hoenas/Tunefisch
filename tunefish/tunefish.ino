#include "arduinoFFT.h"
#include "tones_lookup.h"

arduinoFFT FFT = arduinoFFT(); /* Create FFT object */
/*
These values can be changed in order to evaluate the functions
*/
const uint16_t samples = 2048; // This value MUST ALWAYS be a power of 2
const double signalFrequency = 1000;
const double samplingFrequency = 5000;
const uint8_t amplitude = 100;
/*
These are the input and output vectors
Input vectors receive computed results from FFT
*/
double vReal[samples];
double vImag[samples];

void setup()
{
  Serial.begin(115200);
  while (!Serial)
    ;
  Serial.println("Ready");
}

void calculateFFT()
{
  /* Print the results of the simulated sampling according to time */
  FFT.Windowing(vReal, samples, FFT_WIN_TYP_HAMMING, FFT_FORWARD); /* Weigh data */
  FFT.Compute(vReal, vImag, samples, FFT_FORWARD);                 /* Compute FFT */
  FFT.ComplexToMagnitude(vReal, vImag, samples);                   /* Compute magnitudes */
}

void findPeaks()
{
  FFT.MajorPeak();
}

void loop()
{
  calculateFFT();
  double x = FFT.MajorPeak(vReal, samples, samplingFrequency);
  auto lookup = tones_lookup::get_nearest_tone(44.0);
  Serial.println(lookup.name);
  Serial.println(lookup.frequency);
  Serial.println(lookup.delta_in_cents);

  while (true)
    ;
}
