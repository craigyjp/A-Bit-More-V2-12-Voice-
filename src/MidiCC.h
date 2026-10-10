//MIDI CC control numbers
//These broadly follow standard CC assignments
#define   CCmodwheel  1 //pitch LFO amount - less from mod wheel
#define   CCLfoDepth  3 //pitch LFO amount - panel control

#define   CCglideTime 5

#define   CCvolumeControl 7
#define   CCfilterA 8
#define   CCfilterB 9
#define   CCamDepth 11
#define   CCosc2Interval 12

#define   CCATDepth 14
#define   CCfmDepth 15
#define   CCosc1PW 16
#define   CCosc2PW 17
#define   CCosc1PWM 18
#define   CCosc2PWM 19
#define   CCmodWheelDepth 20
#define   CCvcaGate 21
#define   CCfilterLFO 22
#define   CCnoiseLevel 23
#define   CCfilterPoleSW 24
#define   CCPM_FilterEnv 25
#define   CCPM_DCO2 26
#define   CCFilterLoop 27
#define   CCAmpLoop 28

#define   CCkeyTrack 30
#define   CCkeyTrackSW 31
#define   CCwholemode 32
#define   CCdualmode 33
#define   CCsplitmode 34
#define   CCeffectNumSW 35
#define   CCeffectBankSW 36
#define   CCmonoMulti 37
#define   CCpmDestDCO1SW 38
#define   CCfilterType 39
#define   CCpmDestFilterSW 40

#define   CCvcaVel 42
#define   CCfilterVel 43
#define   CCfilterRelease 44
#define   CCfilterAttack 45
#define   CCfilterSustain 46
#define   CCfilterDecay 47
#define   CCfilterLevel 48

#define   CCfilterEGinv 50

#define   CCfilterEGlevel 53
#define   CCkeyboardMode 54
#define   CCNotePriority 55

#define   CCampRelease 57
#define   CCampAttack 58
#define   CCampSustain 59
#define   CCampDecay 60
#define   CCosc2TriangleLevel 61
#define   CCosc1SubLevel 62
#define   CCLFODelay 63

#define   CCglideSW 65
#define   CCPitchBend 66
#define   CCMWDepth 67
#define   CCosc1PulseLevel 68
#define   CCosc1SawLevel 69

#define   CCosc2Detune 71

#define   CCfilterCutoff 74

#define   CClfoAlt 76
#define   CCLFORate 77
#define   CClfoMult 78

#define   CCosc1Oct 80
#define   CCosc2Oct 81

#define   CCeffectPot1 83
#define   CCeffectPot2  84
#define   CCeffectPot3  85
#define   CCeffectsMix  86
#define   CCpwLFO 87
#define   CCfilterenvLinLogSW 88
#define   CCampenvLinLogSW 89
#define   CCplayMode 90
#define   CCLFOWaveform 91
#define   CCdumpCompleteSW 92
#define   CCdumpStartedSW 93
#define   CCfilterRes 94
#define   CCsyncSW 95
#define   CCchordHoldSW 96
#define   CCupperSW 97
#define   CClowerSW 98
#define   CCpwLFOwaveformSW 99

#define   CCosc2PulseLevel 102
#define   CCosc2SawLevel 103
#define   CCeffectparam3 104
#define   CCallnotesoff 123//Panic button

// CC values used in the WAVEshare to control params

#define   WStmDepth 18 // 0-127
#define   WSATtmDepth 20 // 0-127

//
// VCO Boards
//
// ------------------------------------------------------------------ //
//  Performance / expression                                           //
// ------------------------------------------------------------------ //
#define CC_MOD_WHEEL          1    // Mod wheel -> FM & TM vibrato depth (range set by CC17/CC18)
#define CC_PORTAMENTO_TIME    5    // Glide time (0 = instant .. ~10 s)
#define CC_PORTAMENTO_SW      65   // Portamento on/off (127 = on, 0 = off)
#define CC_BEND_RANGE         16   // Pitch-bend range, 0-12 semitones
#define CC_KEYBOARD_MODE      127  // Note priority: 0 = last, 1 = low, 2 = high

// ------------------------------------------------------------------ //
//  Voice / tuning                                                     //
// ------------------------------------------------------------------ //
#define CC_INTERVAL           14   // Interval for oscillator B, 0-12 semitones
#define CC_DETUNE             15   // Detune amount for oscillator B
#define CC_OCTAVE_A           21   // Osc A octave: 0 = -12, 1 = 0, 2 = +12
#define CC_OCTAVE_B           22   // Osc B octave: 0 = -12, 1 = 0, 2 = +12
#define CC_SYNC               29   // Hard-sync on/off (127 = on, 0 = off)

// ------------------------------------------------------------------ //
//  Modulation depth trims                                             //
// ------------------------------------------------------------------ //
#define CC_FM_MOD_WHEEL       17   // How much the mod wheel affects FM
#define CC_TM_MOD_WHEEL       18   // How much the mod wheel affects TM
#define CC_FM_AT_WHEEL        19   // How much aftertouch affects FM
#define CC_TM_AT_WHEEL        20   // How much aftertouch affects TM
#define CC_FM_ACTUAL          28   // Direct FM amount (independent of wheel/AT)

// ------------------------------------------------------------------ //
//  Pulse width (per AS3340)                                           //
//    channel_e = PW1 + PWM1 (summed) , channel_g = PW2 + PWM2 (summed) //
// ------------------------------------------------------------------ //
#define CC_PW1                23   // VCO1 static pulse width
#define CC_PWM1_DEPTH         24   // VCO1 LFO2 PWM depth  (LFO2 depth, AS3340 #1)
#define CC_PW2                25   // VCO2 static pulse width
#define CC_PWM2_DEPTH         26   // VCO2 LFO2 PWM depth  (LFO2 depth, AS3340 #2)

// ------------------------------------------------------------------ //
//  LFO1  (TAPLFO3-D style: FM + Filter + Amp)                         //
// ------------------------------------------------------------------ //
#define CC_LFO1_RATE          102  // LFO1 rate, 0.05 - 12.8 Hz (exponential)
#define CC_LFO1_DEPTH         103  // LFO1 depth / level (FM amount)
#define CC_LFO1_WAVEFORM      104  // LFO1 waveform, 0 - 15 (see LfoWave in LFO.h)
#define CC_LFO1_MULT          106  // LFO1 tempo multiplier: 0.5/1/1.5/2/3/4
#define CC_AT_DESTINATION     109  // Aftertouch destination: 0 Off, 1 DCO Mod, 2 Cutoff, 3 VCF Mod, 4 VCA Mod
#define CC_LFO1_FILTER_DEPTH  110  // LFO1 -> Filter CV depth (channel_f, bipolar)
#define CC_LFO1_AMP_DEPTH     111  // LFO1 -> Amp CV depth    (channel_h, bipolar)

// ------------------------------------------------------------------ //
//  LFO1 delay machine  (same CC numbers as the SuperSaw oscillator)   //
// ------------------------------------------------------------------ //
#define CC_LFO1_DELAY_TIME    55   // Delay before LFO1 onset (0 = none, else 0.1 - 5 s)
#define CC_LFO1_DELAY_RAMP    56   // Ramp / fade-in after delay (0 = instant, else 0.05 - 3 s)
#define CC_LFO1_RETRIG        57   // Delay retrigger: >=64 on, <64 legato
#define CC_NOTES_HELD         58   // Notes-held flag from master: >=64 held, <64 all released

// ------------------------------------------------------------------ //
//  LFO2  (triangle -> PWM)                                            //
//    depth is per-chip via CC_PWM1_DEPTH / CC_PWM2_DEPTH above         //
// ------------------------------------------------------------------ //
#define CC_LFO2_RATE          108  // LFO2 rate, 0.05 - 20 Hz (exponential)

// ------------------------------------------------------------------ //
//  Keytrack  (channel_c filter CV)                                    //
// ------------------------------------------------------------------ //
#define CC_KEYTRACK_AMOUNT    105  // Keytrack amount, 0 - 100 % (pivots around note 60)
#define CC_KEYTRACK_SW        107  // Keytrack on/off (127 = on, 0 = off -> fixed note-60 CV)

// ------------------------------------------------------------------ //
//  Aftertouch routing  (depth = CC19)                                 //
// ------------------------------------------------------------------ //
#define CC_AT_DESTINATION     109  // Raw 0-4: 0 Off, 1 DCO Mod, 2 Cutoff (handled by assigner), 3 VCF Mod, 4 VCA Mod

// ------------------------------------------------------------------ //
//  System / actions  (act on value == 127)                            //
// ------------------------------------------------------------------ //
#define CC_AUTOTUNE_START     121  // Start the autotune routine
#define CC_AUTOTUNE_RESET     122  // Zero all autotune corrections
#define CC_ALL_NOTES_OFF      123  // Panic / all notes off

//
// Filter Boards
//
// CV voltages CC number

#define VB_VCF_ATTACK 9
#define VB_VCF_DECAY 10
#define VB_VCF_SUSTAIN 11
#define VB_VCF_RELEASE 12
#define VB_VCA_ATTACK 13
#define VB_VCA_DECAY 14
#define VB_VCA_SUSTAIN 15
#define VB_VCA_RELEASE 16

#define VB_FILTER_CUTOFF 19
#define VB_FILTER_RES 20
#define VB_VOLUME 23
#define VB_EFFECT_POT1 25
#define VB_EFFECT_POT2 26
#define VB_EFFECT_POT3 27
#define VB_EFFECT_MIX 28
#define VB_NOISE_LEVEL 29

#define VB_EG_DEPTH 32
#define VB_PINK_WHITE 41

#define VB_OSC1_SAW_LEVEL 33
#define VB_OSC1_PULSE_LEVEL 34
#define VB_OSC1_SUB_LEVEL 35
#define VB_OSC2_SAW_LEVEL 36
#define VB_OSC2_PULSE_LEVEL 37
#define VB_OSC2_TRIANGLE_LEVEL 38
#define VB_OSC1_PM_DCO 39
#define VB_OSC1_PM_ENV 40


// Switches CC number

#define VB_FILTER_EG_INVERT 68
#define VB_FILTER_VELOCITY 69
#define VB_AMP_VELOCITY 70
#define VB_FILTER_POLE 71
#define VB_FILTER_LIN_LOG 72
#define VB_AMP_LIN_LOG 73
#define VB_POLYMOD_DEST_DCO1 74
#define VB_POLYMOD_DEST_FILTER 75

#define VB_EFFECT_BANK_1 76
#define VB_EFFECT_BANK_2 77
#define VB_EFFECT_BANK_3 78
#define VB_EFFECT_2 79
#define VB_EFFECT_1 80
#define VB_EFFECT_0 81
#define VB_EFFECT_INTERNAL 82
#define VB_FILTER_PUNCH 83

#define VB_AMP_PUNCH 83
#define VB_FILTER_A 85
#define VB_FILTER_B 86
#define VB_FILTER_C 87
#define VB_FILTER_MODE_BIT0 88
#define VB_FILTER_MODE_BIT1 89
#define VB_AMP_MODE_BIT0 90
#define VB_AMP_MODE_BIT1 91

