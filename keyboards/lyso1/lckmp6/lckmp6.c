#include "quantum.h"
led_config_t g_led_config = { {
  // Key Matrix to LED Index
  { 5 , 4,  3},
  { 0,  1,  2}
}, {
  // LED Index to Physical Position
  { 112,  64 }, { 164,  16 }, { 149,  16 }, { 188,  64 }, {  164,  64 }, {  149,  64 }
}, {
  // LED Index to Flag
  4, 4, 4, 4, 4, 4
} };
