#ifndef tones_lookup_h /* Prevent loading library twice */
#define tones_lookup_h
#include <Arduino.h>
namespace tones_lookup
{
#define CENTS_PER_OCTAVE 1200
// Defines for no note found
#define NO_MATCH "NO NOTE"
#define NO_MATCH_FREQUENCY 0.0
// Defines for A0
#define A0 "A0"
#define A0_FREQUENCY 27.5
// Defines for A#0/Bb0
#define ASHARP0_Bb0 "A#0/Bb0"
#define ASHARP0_Bb0_FREQUENCY 29.1352
// Defines for B0
#define B0 "B0"
#define B0_FREQUENCY 30.8677
// Defines for C1
#define C1 "C1"
#define C1_FREQUENCY 32.7032
// Defines for C#1/Db1
#define CSHARP1_Db1 "C#1/Db1"
#define CSHARP1_Db1_FREQUENCY 34.6478
// Defines for D1
#define D1 "D1"
#define D1_FREQUENCY 36.7081
// Defines for D#1/Eb1
#define DSHARP1_Eb1 "D#1/Eb1"
#define DSHARP1_Eb1_FREQUENCY 38.8909
// Defines for E1
#define E1 "E1"
#define E1_FREQUENCY 41.2034
// Defines for F1
#define F1 "F1"
#define F1_FREQUENCY 43.6535
// Defines for F#1/Gb1
#define FSHARP1_Gb1 "F#1/Gb1"
#define FSHARP1_Gb1_FREQUENCY 46.2493
// Defines for G1
#define G1 "G1"
#define G1_FREQUENCY 48.9994
// Defines for G#1/Ab1
#define GSHARP1_Ab1 "G#1/Ab1"
#define GSHARP1_Ab1_FREQUENCY 51.9131
// Defines for A1
#define A1 "A1"
#define A1_FREQUENCY 55.0
// Defines for A#1/Bb1
#define ASHARP1_Bb1 "A#1/Bb1"
#define ASHARP1_Bb1_FREQUENCY 58.2705
// Defines for B1
#define B1 "B1"
#define B1_FREQUENCY 61.7354
// Defines for C2
#define C2 "C2"
#define C2_FREQUENCY 65.4064
// Defines for C#2/Db2
#define CSHARP2_Db2 "C#2/Db2"
#define CSHARP2_Db2_FREQUENCY 69.2957
// Defines for D2
#define D2 "D2"
#define D2_FREQUENCY 73.4162
// Defines for D#2/Eb2
#define DSHARP2_Eb2 "D#2/Eb2"
#define DSHARP2_Eb2_FREQUENCY 77.7817
// Defines for E2
#define E2 "E2"
#define E2_FREQUENCY 82.4069
// Defines for F2
#define F2 "F2"
#define F2_FREQUENCY 87.3071
// Defines for F#2/Gb2
#define FSHARP2_Gb2 "F#2/Gb2"
#define FSHARP2_Gb2_FREQUENCY 92.4986
// Defines for G2
#define G2 "G2"
#define G2_FREQUENCY 97.9989
// Defines for G#2/Ab2
#define GSHARP2_Ab2 "G#2/Ab2"
#define GSHARP2_Ab2_FREQUENCY 103.826
// Defines for A2
#define A2 "A2"
#define A2_FREQUENCY 110.0
// Defines for A#2/Bb2
#define ASHARP2_Bb2 "A#2/Bb2"
#define ASHARP2_Bb2_FREQUENCY 116.541
// Defines for B2
#define B2 "B2"
#define B2_FREQUENCY 123.471
// Defines for C3
#define C3 "C3"
#define C3_FREQUENCY 130.813
// Defines for C#3/Db3
#define CSHARP3_Db3 "C#3/Db3"
#define CSHARP3_Db3_FREQUENCY 138.591
// Defines for D3
#define D3 "D3"
#define D3_FREQUENCY 146.832
// Defines for D#3/Eb3
#define DSHARP3_Eb3 "D#3/Eb3"
#define DSHARP3_Eb3_FREQUENCY 155.563
// Defines for E3
#define E3 "E3"
#define E3_FREQUENCY 164.814
// Defines for F3
#define F3 "F3"
#define F3_FREQUENCY 174.614
// Defines for F#3/Gb3
#define FSHARP3_Gb3 "F#3/Gb3"
#define FSHARP3_Gb3_FREQUENCY 184.997
// Defines for G3
#define G3 "G3"
#define G3_FREQUENCY 195.998
// Defines for G#3/Ab3
#define GSHARP3_Ab3 "G#3/Ab3"
#define GSHARP3_Ab3_FREQUENCY 207.652
// Defines for A3
#define A3 "A3"
#define A3_FREQUENCY 220.0
// Defines for A#3/Bb3
#define ASHARP3_Bb3 "A#3/Bb3"
#define ASHARP3_Bb3_FREQUENCY 233.082
// Defines for B3
#define B3 "B3"
#define B3_FREQUENCY 246.942
// Defines for C4
#define C4 "C4"
#define C4_FREQUENCY 261.626
// Defines for C#4/Db4
#define CSHARP4_Db4 "C#4/Db4"
#define CSHARP4_Db4_FREQUENCY 277.183
// Defines for D4
#define D4 "D4"
#define D4_FREQUENCY 293.665
// Defines for D#4/Eb4
#define DSHARP4_Eb4 "D#4/Eb4"
#define DSHARP4_Eb4_FREQUENCY 311.127
// Defines for E4
#define E4 "E4"
#define E4_FREQUENCY 329.628
// Defines for F4
#define F4 "F4"
#define F4_FREQUENCY 349.228
// Defines for F#4/Gb4
#define FSHARP4_Gb4 "F#4/Gb4"
#define FSHARP4_Gb4_FREQUENCY 369.994
// Defines for G4
#define G4 "G4"
#define G4_FREQUENCY 391.995
// Defines for G#4/Ab4
#define GSHARP4_Ab4 "G#4/Ab4"
#define GSHARP4_Ab4_FREQUENCY 415.305
// Defines for A4
#define A4 "A4"
#define A4_FREQUENCY 440.0
// Defines for A#4/Bb4
#define ASHARP4_Bb4 "A#4/Bb4"
#define ASHARP4_Bb4_FREQUENCY 466.164
// Defines for B4
#define B4 "B4"
#define B4_FREQUENCY 493.883
// Defines for C5
#define C5 "C5"
#define C5_FREQUENCY 523.251
// Defines for C#5/Db5
#define CSHARP5_Db5 "C#5/Db5"
#define CSHARP5_Db5_FREQUENCY 554.365
// Defines for D5
#define D5 "D5"
#define D5_FREQUENCY 587.33
// Defines for D#5/Eb5
#define DSHARP5_Eb5 "D#5/Eb5"
#define DSHARP5_Eb5_FREQUENCY 622.254
// Defines for E5
#define E5 "E5"
#define E5_FREQUENCY 659.255
// Defines for F5
#define F5 "F5"
#define F5_FREQUENCY 698.456
// Defines for F#5/Gb5
#define FSHARP5_Gb5 "F#5/Gb5"
#define FSHARP5_Gb5_FREQUENCY 739.989
// Defines for G5
#define G5 "G5"
#define G5_FREQUENCY 783.991
// Defines for G#5/Ab5
#define GSHARP5_Ab5 "G#5/Ab5"
#define GSHARP5_Ab5_FREQUENCY 830.609
// Defines for A5
#define A5 "A5"
#define A5_FREQUENCY 880.0
// Defines for A#5/Bb5
#define ASHARP5_Bb5 "A#5/Bb5"
#define ASHARP5_Bb5_FREQUENCY 932.328
// Defines for B5
#define B5 "B5"
#define B5_FREQUENCY 987.767
// Defines for C6
#define C6 "C6"
#define C6_FREQUENCY 1046.5
// Defines for C#6/Db6
#define CSHARP6_Db6 "C#6/Db6"
#define CSHARP6_Db6_FREQUENCY 1108.73
// Defines for D6
#define D6 "D6"
#define D6_FREQUENCY 1174.66
// Defines for D#6
#define DSHARP6 "D#6"
#define DSHARP6_FREQUENCY 1244.51
// Defines for E6
#define E6 "E6"
#define E6_FREQUENCY 1318.51
    struct Tone
    {
        String name;
        double frequency;
    };

    struct ToneMatch
    {
        String name;
        double frequency;
        double delta_in_cents;
    };

    static const Tone TONES_ARRAY[] = {
        {NO_MATCH, NO_MATCH_FREQUENCY},
        {A0, A0_FREQUENCY},
        {ASHARP0_Bb0, ASHARP0_Bb0_FREQUENCY},
        {B0, B0_FREQUENCY},
        {C1, C1_FREQUENCY},
        {CSHARP1_Db1, CSHARP1_Db1_FREQUENCY},
        {D1, D1_FREQUENCY},
        {DSHARP1_Eb1, DSHARP1_Eb1_FREQUENCY},
        {E1, E1_FREQUENCY},
        {F1, F1_FREQUENCY},
        {FSHARP1_Gb1, FSHARP1_Gb1_FREQUENCY},
        {G1, G1_FREQUENCY},
        {GSHARP1_Ab1, GSHARP1_Ab1_FREQUENCY},
        {A1, A1_FREQUENCY},
        {ASHARP1_Bb1, ASHARP1_Bb1_FREQUENCY},
        {B1, B1_FREQUENCY},
        {C2, C2_FREQUENCY},
        {CSHARP2_Db2, CSHARP2_Db2_FREQUENCY},
        {D2, D2_FREQUENCY},
        {DSHARP2_Eb2, DSHARP2_Eb2_FREQUENCY},
        {E2, E2_FREQUENCY},
        {F2, F2_FREQUENCY},
        {FSHARP2_Gb2, FSHARP2_Gb2_FREQUENCY},
        {G2, G2_FREQUENCY},
        {GSHARP2_Ab2, GSHARP2_Ab2_FREQUENCY},
        {A2, A2_FREQUENCY},
        {ASHARP2_Bb2, ASHARP2_Bb2_FREQUENCY},
        {B2, B2_FREQUENCY},
        {C3, C3_FREQUENCY},
        {CSHARP3_Db3, CSHARP3_Db3_FREQUENCY},
        {D3, D3_FREQUENCY},
        {DSHARP3_Eb3, DSHARP3_Eb3_FREQUENCY},
        {E3, E3_FREQUENCY},
        {F3, F3_FREQUENCY},
        {FSHARP3_Gb3, FSHARP3_Gb3_FREQUENCY},
        {G3, G3_FREQUENCY},
        {GSHARP3_Ab3, GSHARP3_Ab3_FREQUENCY},
        {A3, A3_FREQUENCY},
        {ASHARP3_Bb3, ASHARP3_Bb3_FREQUENCY},
        {B3, B3_FREQUENCY},
        {C4, C4_FREQUENCY},
        {CSHARP4_Db4, CSHARP4_Db4_FREQUENCY},
        {D4, D4_FREQUENCY},
        {DSHARP4_Eb4, DSHARP4_Eb4_FREQUENCY},
        {E4, E4_FREQUENCY},
        {F4, F4_FREQUENCY},
        {FSHARP4_Gb4, FSHARP4_Gb4_FREQUENCY},
        {G4, G4_FREQUENCY},
        {GSHARP4_Ab4, GSHARP4_Ab4_FREQUENCY},
        {A4, A4_FREQUENCY},
        {ASHARP4_Bb4, ASHARP4_Bb4_FREQUENCY},
        {B4, B4_FREQUENCY},
        {C5, C5_FREQUENCY},
        {CSHARP5_Db5, CSHARP5_Db5_FREQUENCY},
        {D5, D5_FREQUENCY},
        {DSHARP5_Eb5, DSHARP5_Eb5_FREQUENCY},
        {E5, E5_FREQUENCY},
        {F5, F5_FREQUENCY},
        {FSHARP5_Gb5, FSHARP5_Gb5_FREQUENCY},
        {G5, G5_FREQUENCY},
        {GSHARP5_Ab5, GSHARP5_Ab5_FREQUENCY},
        {A5, A5_FREQUENCY},
        {ASHARP5_Bb5, ASHARP5_Bb5_FREQUENCY},
        {B5, B5_FREQUENCY},
        {C6, C6_FREQUENCY},
        {CSHARP6_Db6, CSHARP6_Db6_FREQUENCY},
        {D6, D6_FREQUENCY},
        {DSHARP6, DSHARP6_FREQUENCY},
        {E6, E6_FREQUENCY},
    };

    double get_delta_in_cent(double frequency, double reference_frequency);
    ToneMatch get_nearest_tone(double frequency);
}
#endif
