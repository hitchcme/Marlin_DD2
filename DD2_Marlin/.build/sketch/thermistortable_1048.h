/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
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
 *
 */

// Davinci Duo 2.0 bed thermistor
// Verified by Hitch and type-K thermocouple.
const short temptable_1048[][2] PROGMEM = {
  {OV(915),   120},
  {OV(920),  115},
  {OV(924),  110},
  {OV(931),  106},
  {OV(939),  100},
  {OV(946),  95},
  {OV(953),  90},
  {OV(957),  85},
  {OV(967),  80},
  {OV(970),  75},
  {OV(976),  70},
  {OV(991),  55},
  {OV(995),  50},
  {OV(1000),   45},
  {OV(1002),   40},
  {OV(1005),   35},
  {OV(1008),   30},
  {OV(1010),   25},
  {OV(1012),   17},
  {OV(1015),   12},
};
