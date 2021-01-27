/*
 * version-check-mode.c: Version check mode for Anduril.
 *
 * Copyright (C) 2017 Selene Scriven
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LEVEL_CHECK_MODE_C
#define LEVEL_CHECK_MODE_C

#include "level-check-mode.h"

// empty state; logic is handled in FSM loop() instead
uint8_t level_check_state(Event event, uint16_t arg) {
    return EVENT_NOT_HANDLED;
}

// this happens in FSM loop()
inline void level_check_iter() {
	blink_num(memorized_level);
	nice_delay_ms(2000);
	blink_num(ramp_style);
	nice_delay_ms(2000);
	blink_num(ramp_floor);
	nice_delay_ms(2000);
	blink_num(ramp_ceil);
	
    // FIXME: when user interrupts with button, "off" takes an extra click
    //  before it'll turn back on, because the click to cancel gets sent
    //  to the "off" state instead of version_check_state
    //while (button_is_pressed()) {}
    //empty_event_sequence();

    set_state_deferred(off_state, 0);
}


#endif

