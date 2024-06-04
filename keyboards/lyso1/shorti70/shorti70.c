#include "quantum.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    static uint8_t counter = 0;

    if (record->event.pressed) {
        counter++;
    } else {
        counter--;
    }

    writePin(GP5, counter > 0);

    return true;
}