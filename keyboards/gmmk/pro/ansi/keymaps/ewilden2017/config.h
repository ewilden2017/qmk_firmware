/* Copyright 2022 Evan Wildenberg
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
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

#pragma once

#define TAPPING_TOGGLE 2
#define TAPPING_TERM 180

// Disable RGB after 20 minutes or if the computer goes to sleep.
#ifdef RGB_MATRIX_ENABLE
#    define RGB_DISABLE_TIMEOUT 1200000  // 20 minutes (20 * 60 * 1000ms)
#    define RGB_DISABLE_WHEN_USB_SUSPENDED
#endif  // RGB_MATRIX_ENABLE
