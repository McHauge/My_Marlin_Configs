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

#define CONFIG_EXAMPLES_DIR "Creality/CR-10S"

/**
 * Custom Boot Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable SHOW_CUSTOM_BOOTSCREEN in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * https://marlinfw.org/tools/u8glib/converter.html
 */

#define CUSTOM_BOOTSCREEN_TIMEOUT 2000
#define CUSTOM_BOOTSCREEN_BMPWIDTH 128

const unsigned char custom_start_bmp[] PROGMEM = {
  B00000000,B00000000,B00111111,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ..................#############.................................................................................................
  B00000000,B00011111,B11111111,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ...........####################.................................................................................................
  B00000000,B00111111,B11111111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ..........########################..............................................................................................
  B00000000,B00111111,B11111111,B11111111,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ..........##########################............................................................................................
  B00000000,B11111111,B11111111,B11111111,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ........###############################.........................................................................................
  B00000011,B11111111,B11111111,B11111111,B11111111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ......##################################........................................................................................
  B00000011,B11111111,B11111111,B11111111,B11111111,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ......###################################.......................................................................................
  B00000011,B11111111,B11111111,B11111111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ......####################################......................................................................................
  B00000011,B11111111,B11111111,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ......#####################################.....................................................................................
  B00000001,B11110000,B00000000,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // .......#####............###################.....................................................................................
  B00000001,B11000000,B00110000,B00000111,B11111111,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // .......###........##.........###############....................................................................................
  B00000000,B01000000,B00010100,B01000000,B11111111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // .........#.........#.#...#......#############...................................................................................
  B00000000,B00000000,B00000100,B00000000,B00111111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // .....................#............###########...................................................................................
  B00000000,B00000000,B00000000,B00000101,B00001111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // .............................#.#....#########...................................................................................
  B00000000,B00111111,B11111110,B00000101,B01000011,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ..........#############......#.#.#....#######...................................................................................
  B00000000,B00111111,B11111111,B11110001,B01000001,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ..........##################...#.#.....######...................................................................................
  B00000000,B00011111,B11111111,B11111111,B01000000,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ...........#####################.#......####....................................................................................
  B00000000,B00111110,B00011111,B11011111,B11000000,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ..........#####....#######.#######......###.....................................................................................
  B00000000,B01111100,B00000111,B11111111,B11100000,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // .........#####.......##############.....##......................................................................................
  B00000000,B01111000,B00000000,B00001111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // .........####...............#########...........................................................................................
  B00000000,B11110000,B00000000,B00000001,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ........####...................########.........................................................................................
  B00000000,B11110000,B00000000,B00000000,B01111110,B00001111,B11110000,B00000111,B00000011,B00000111,B11000000,B00001111,B00000000,B00111100,B00000000,B11110000, // ........####.....................######.....########.........###......##.....#####..........####..........####..........####....
  B00000000,B11110000,B00000000,B00000000,B01111110,B00001111,B11111100,B00000111,B00000110,B00001111,B11110000,B00001111,B00000000,B00111100,B00000000,B11110000, // ........####.....................######.....##########.......###.....##.....########........####..........####..........####....
  B00000001,B11110000,B00000000,B00000000,B00111110,B00001110,B00001111,B00000111,B00001110,B00011000,B00110000,B00011111,B00000000,B01111100,B00000001,B11110000, // .......#####......................#####.....###.....####.....###....###....##.....##.......#####.........#####.........#####....
  B00000001,B11110000,B00000000,B00000000,B00011110,B00001110,B00000011,B00000111,B00011100,B00011000,B00000000,B00110111,B00000000,B11011100,B00000011,B01110000, // .......#####.......................####.....###.......##.....###...###.....##.............##.###........##.###........##.###....
  B00000001,B11100001,B11111000,B00000000,B00011110,B00001110,B00000011,B10000111,B00111000,B00111000,B00000000,B00110111,B00000000,B11011100,B00000011,B01110000, // .......####....######..............####.....###.......###....###..###.....###.............##.###........##.###........##.###....
  B00000001,B11100001,B11111100,B00100000,B00011110,B00001110,B00000001,B10000111,B00110000,B00011000,B00000000,B01100111,B00000001,B10011100,B00000110,B01110000, // .......####....#######....#........####.....###........##....###..##.......##............##..###.......##..###.......##..###....
  B00000011,B11100011,B11111100,B11111000,B00011110,B00001110,B00000001,B10000111,B01100000,B00011100,B00000000,B01100111,B00000001,B10011100,B00000110,B01110000, // ......#####...########..#####......####.....###........##....###.##........###...........##..###.......##..###.......##..###....
  B00000011,B11000011,B11111100,B11111100,B00011110,B00001110,B00000001,B10000111,B11000000,B00001111,B00000000,B11000111,B00000011,B00011100,B00001100,B01110000, // ......####....########..######.....####.....###........##....#####..........####........##...###......##...###......##...###....
  B00000011,B11000000,B11111000,B11111110,B00011110,B00001110,B00000001,B10000111,B11100000,B00000111,B11000001,B10000111,B00000110,B00011100,B00011000,B01110000, // ......####......#####...#######....####.....###........##....######..........#####.....##....###.....##....###.....##....###....
  B00000111,B11000000,B00100000,B11111110,B00011110,B00001110,B00000001,B10000111,B01100000,B00000000,B11110001,B10000111,B00000110,B00011100,B00011000,B01110000, // .....#####........#.....#######....####.....###........##....###.##.............####...##....###.....##....###.....##....###....
  B00000011,B11000000,B00000000,B01111111,B00011110,B00001110,B00000001,B10000111,B01110000,B00000000,B01110011,B00000111,B00001100,B00011100,B00110000,B01110000, // ......####...............#######...####.....###........##....###.###.............###..##.....###....##.....###....##.....###....
  B00000111,B11000000,B00000000,B00111011,B00011110,B00001110,B00000001,B10000111,B00111000,B00000000,B00110011,B11111111,B11001111,B11111111,B00111111,B11111100, // .....#####................###.##...####.....###........##....###..###.............##..############..############..############..
  B00000111,B11000000,B00000000,B00000000,B00011110,B00001110,B00000011,B10000111,B00011100,B00000000,B00111011,B11111111,B11001111,B11111111,B00111111,B11111100, // .....#####.........................####.....###.......###....###...###............###.############..############..############..
  B00000111,B11000000,B00000000,B00000000,B00011100,B00001110,B00000111,B00000111,B00001100,B00000000,B00110000,B00000111,B00000000,B00011100,B00000000,B01110000, // .....#####.........................###......###......###.....###....##............##.........###...........###...........###....
  B00000111,B11000000,B01011100,B00000000,B00011100,B00001110,B00001111,B00000111,B00001110,B00110000,B01110000,B00000111,B00000000,B00011100,B00000000,B01110000, // .....#####.......#.###.............###......###.....####.....###....###...##.....###.........###...........###...........###....
  B00001111,B10000001,B11011111,B00000000,B00111100,B00001111,B11111100,B00000111,B00000111,B00111111,B11100000,B00000111,B00000000,B00011100,B00000000,B01110000, // ....#####......###.#####..........####......##########.......###.....###..#########..........###...........###...........###....
  B00001111,B11000111,B10011111,B10000000,B00111100,B00001111,B11110000,B00000111,B00000011,B00011111,B10000000,B00000111,B00000000,B00011100,B00000000,B01110000, // ....######...####..######.........####......########.........###......##...######............###...........###...........###....
  B00001111,B11000111,B10001110,B00000000,B00111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ....######...####...###...........####..........................................................................................
  B00010111,B11100001,B11111000,B00100000,B01111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ...#.######....######.....#......#####..........................................................................................
  B00010111,B11100001,B11111110,B01110000,B01111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ...#.######....########..###.....####...........................................................................................
  B00000111,B11100000,B00111111,B11111000,B01111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // .....######.......###########....####...........................................................................................
  B00000011,B11100010,B00111111,B11110000,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ......#####...#...##########....#####...........................................................................................
  B00000111,B11110110,B01111110,B01100000,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // .....#######.##..######..##.....#####...........................................................................................
  B00001111,B11111110,B00011111,B01110001,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ....###########....#####.###...######...........................................................................................
  B00011111,B11111110,B00000000,B00111011,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ...############...........###.#######...........................................................................................
  B00111111,B11111111,B10000000,B00111111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ..###############.........###########...........................................................................................
  B11111111,B11111111,B11111000,B01111111,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // #####################....###########............................................................................................
  B11111111,B11111111,B11111111,B11111111,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ####################################............................................................................................
  B11111111,B11111111,B11111111,B11111111,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ####################################............................................................................................
  B11111111,B11111111,B11111111,B11111111,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ####################################............................................................................................
  B01111111,B11111111,B11111111,B11111111,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // .###################################............................................................................................
  B00111111,B11111111,B11011111,B11111111,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ..################.#################............................................................................................
  B00011111,B11111111,B11111111,B11111111,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ...#################################............................................................................................
  B00001111,B11111111,B11111111,B11111111,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ....################################............................................................................................
  B00001111,B11110111,B11111111,B10111111,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ....########.############.##########............................................................................................
  B00000111,B11110111,B11111111,B00111111,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // .....#######.###########..##########............................................................................................
  B00000011,B11110111,B11111111,B11111111,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ......######.#######################............................................................................................
  B00000000,B11111111,B11111111,B11111111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ........#############################...........................................................................................
  B00000000,B01111111,B11111111,B11111111,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // .........###########################............................................................................................
  B00000000,B00011111,B10000111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ...........######....#############..............................................................................................
  B00000000,B00011111,B10000111,B11111111,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ...........######....############...............................................................................................
  B00000000,B00000111,B11111111,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // .............##################.................................................................................................
  B00000000,B00000001,B11111111,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000  // ...............################.................................................................................................
};
