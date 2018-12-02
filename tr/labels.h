#ifndef TR_H
#define TR_H

#ifdef __cplusplus
extern "C" {
#endif

#include "../menu.h"

#include "../tuner/tuner.h"
#include "../audio/audio.h"

typedef enum {
    LANG_DEFAULT = 0,

    LANG_BY,
    LANG_RU,

    LANG_END
} Lang;

typedef enum {
    LABEL_SUNDAY,
    LABEL_MONDAY,
    LABEL_TUESDAY,
    LABEL_WEDNESDAY,
    LABEL_THURSDAY,
    LABEL_FRIDAY,
    LABEL_SATURDAY,

    LABEL_BRIGNTNESS,

    LABEL_VOLUME,
    LABEL_BASS,
    LABEL_MIDDLE,
    LABEL_TREBLE,
    LABEL_FRONTREAR,
    LABEL_BALANCE,
    LABEL_CENTER,
    LABEL_SUBWOOFER,
    LABEL_PREAMP,

    LABEL_BOOL_OFF,
    LABEL_BOOL_ON,

    LABEL_TUNER_IC,
    LABEL_TUNER_IC_END = LABEL_TUNER_IC + (TUNER_IC_END - TUNER_IC_NO),

    LABEL_TUNER_BAND = LABEL_TUNER_IC_END,
    LABEL_TUNER_BAND_END = LABEL_TUNER_BAND + (TUNER_BAND_END - TUNER_BAND_FM_US_EUROPE),

    LABEL_TUNER_STEP = LABEL_TUNER_BAND_END,
    LABEL_TUNER_STEP_END = LABEL_TUNER_STEP + (TUNER_STEP_END - TUNER_STEP_50K),

    LABEL_TUNER_DEEMPH = LABEL_TUNER_STEP_END,
    LABEL_TUNER_DEEMPH_END = LABEL_TUNER_DEEMPH + (TUNER_DEEMPH_END - TUNER_DEEMPH_50u),

    LABEL_AUDIO_IC = LABEL_TUNER_DEEMPH_END,
    LABEL_AUDIO_IC_END = LABEL_AUDIO_IC + (AUDIO_IC_END - AUDIO_IC_NO),

    LABEL_LANG = LABEL_AUDIO_IC_END,
    LABEL_LANGUAGE_END = LABEL_LANG + (LANG_END - LANG_DEFAULT),

    LABEL_GAIN0 = LABEL_LANGUAGE_END,
    LABEL_GAIN1,
    LABEL_GAIN2,
    LABEL_GAIN3,
    LABEL_GAIN4,
    LABEL_GAIN5,
    LABEL_GAIN6,
    LABEL_GAIN7,

    LABEL_IN_TUNER,
    LABEL_IN_PC,
    LABEL_IN_TV,
    LABEL_IN_BLUETOOTH,
    LABEL_IN_DVD,
    LABEL_IN_USB,
    LABEL_IN_MICROPHONE,
    LABEL_IN_GUITAR,
    LABEL_IN_TURNTABLES,
    LABEL_IN_CASSETTE,
    LABEL_IN_PROJECTOR,
    LABEL_IN_SATELLITE,
    LABEL_IN_MIXER,

    // Menu
    LABEL_MENU,
    LABEL_MENU_END = LABEL_MENU + (MENU_END - MENU_NULL),

    LABEL_END = LABEL_MENU_END,
} Label;

void labelsSetLang(Lang value);
Lang labelsGetLang(void);

const char **labelsGet(void);

void labelsInit(void);

#ifdef __cplusplus
}
#endif

#endif // TR_H
