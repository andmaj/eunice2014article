/**
 * Position vector
 *
 * Written by Andras Majdan
 * License: GNU General Public License Version 3
 *
 * Report bugs to <majdan.andras@gmail.com>
 */

#ifndef POSVECT_H_
#define POSVECT_H_

#include <inttypes.h>

uint_fast8_t posvect_from_bitvect(uint_fast8_t *posvect, uint_fast64_t bitvect, uint_fast8_t width);

void posvect_clear(uint_fast8_t *posvect, uint_fast8_t width);
void posvect_print(uint_fast8_t *posvect, uint_fast8_t width);

#endif /* POSVECT_H_ */
