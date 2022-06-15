#include <stdbool.h>

typedef struct GB_core_t GB_core_t;

typedef enum {
  BUTTON_START,
  BUTTON_SELECT,
  BUTTON_B,
  BUTTON_A,
  BUTTON_DOWN,
  BUTTON_UP,
  BUTTON_LEFT,
  BUTTON_RIGHT
} GbButtons;

void GB_init(GB_core_t **gb);
void GB_destroy(GB_core_t *gb);
void *GB_get_rom(GB_core_t *gb);
uint32_t GB_run_to_next_frame(GB_core_t *gb);
void GB_set_button(GB_core_t *gb, GbButtons b, bool state);