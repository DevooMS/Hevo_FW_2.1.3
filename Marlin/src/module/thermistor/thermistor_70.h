/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

// Stock BQ Hephestos 2 100k thermistor.
// Created on 29/12/2017 with an ambient temperature of 20C.
// ANENG AN8009 DMM with a K-type probe used for measurements.

// R25 = 100 kOhm, beta25 = 4100 K, 4.7 kOhm pull-up, bqh2 stock thermistor
constexpr temp_entry_t temptable_70[] PROGMEM = {
  { OV(  40), 250 },
  { OV(  45), 240 },
  { OV(  50), 235 }, 
  { OV(  54), 230 }, 
  { OV(  58), 225 }, 
  { OV(  66), 220 }, 
  { OV(  72), 215 }, 
  { OV(  78), 210 }, 
  { OV(  84), 200 }, 
  { OV(  93), 190 }, 
  { OV( 113), 180 }, 
  { OV( 148), 170 }, 
  { OV( 187), 160 }, 
  { OV( 223), 150 }, 
  { OV( 301), 140 },
  { OV( 330), 130 },
  { OV( 410), 120 },
  { OV( 496), 110 },
  { OV( 565), 100 },
  { OV( 638),  90 },
  { OV( 704),  80 },
  { OV( 783),  70 },
  { OV( 840),  60 },
  { OV( 903),  50 },
  { OV( 931),  40 },
  { OV( 962),  30 },
  { OV(1008),   0 },
};
