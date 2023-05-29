#include "tones_lookup.h"
namespace tones_lookup
{

    double get_delta_in_cent(double frequency, double reference_frequency)
    {
        // Source: https://de.wikipedia.org/wiki/Cent_(Musik)
        double p = frequency / reference_frequency;
        return CENTS_PER_OCTAVE * (log10(p) / log10(2));
    }

    ToneMatch get_nearest_tone(double frequency)
    {
        Tone found_tone = TONES_ARRAY[0];
        double delta = 0.0;
        double old_delta = found_tone.frequency - frequency;
        for (Tone tone : TONES_ARRAY)
        {
            delta = frequency - tone.frequency;
            double delta_abs = abs(delta);
            // Check if if delta is smaller
            if (abs(old_delta) > delta_abs)
            {
                found_tone = tone;
                old_delta = delta;
            }
            // if the delta is negative, we already passed the tone and can break out of the loop
            if (delta < 0)
            {
                break;
            }
        }
        ToneMatch returnMatch;
        returnMatch.name = found_tone.name;
        returnMatch.frequency = found_tone.frequency;
        returnMatch.delta_in_cents = tones_lookup::get_delta_in_cent(frequency, found_tone.frequency);
        return returnMatch;
    }
}