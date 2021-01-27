/*
 * level-check-mode.h: Version check mode for Anduril.
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

#ifndef LEVEL_CHECK_MODE_H
#define LEVEL_CHECK_MODE_H

#define USE_BLINK_DIGIT  // FIXME: does nothing unless defined earlier

uint8_t level_check_state(Event event, uint16_t arg);
inline void level_check_iter();


#endif
