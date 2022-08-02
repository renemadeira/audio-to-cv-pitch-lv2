//
//  DistrhoPluginInfo.h


#ifndef DISTRHO_PLUGIN_INFO_H_INCLUDED
#define DISTRHO_PLUGIN_INFO_H_INCLUDED

#define DISTRHO_PLUGIN_BRAND "Falk + BGSN"
#define DISTRHO_PLUGIN_NAME  "Falk Audio to CV Pitch"
#define DISTRHO_PLUGIN_URI   "http://bramgiesen.com/audio-to-cv-pitch-with-falk-changes"

#define DISTRHO_PLUGIN_HAS_UI        0
#define DISTRHO_PLUGIN_IS_RT_SAFE    1

#define DISTRHO_PLUGIN_NUM_INPUTS    1
#define DISTRHO_PLUGIN_NUM_OUTPUTS   2
#define DISTRHO_PLUGIN_WANT_MIDI_INPUT  0
#define DISTRHO_PLUGIN_WANT_MIDI_OUTPUT 0

#define DISTRHO_PLUGIN_WANT_TIMEPOS  0
#define DISTRHO_PLUGIN_WANT_PROGRAMS 0

#define DISTRHO_PLUGIN_LV2_CATEGORY "mod:ControlVoltagePlugin"

#ifdef __MOD_DEVICES__
#define DISTRHO_PLUGIN_USES_MODGUI 1
#endif

#endif // DISTRHO_PLUGIN_INFO_H_INCLUDED
