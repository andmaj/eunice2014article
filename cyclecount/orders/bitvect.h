/**
 * Bit vector
 *
 * Written by Andras Majdan
 * License: GNU General Public License Version 3
 *
 * Report bugs to <majdan.andras@gmail.com>
 */

#ifndef BITVECT_H_
#define BITVECT_H_

#include <inttypes.h>

uint_fast64_t bitvect_from_posvect(uint_fast8_t *posvect, uint_fast8_t width);

void bitvect_print(uint_fast64_t bitvect);
void bitvect_print_w(uint_fast64_t bitvect, uint_fast8_t width);


#endif /* BITVECT_H_ */
