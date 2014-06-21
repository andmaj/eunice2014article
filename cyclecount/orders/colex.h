/**
 * Co-lexicographic order
 *
 * Written by Andras Majdan
 * License: GNU General Public License Version 3
 *
 * Report bugs to <majdan.andras@gmail.com>
 */

#ifndef COLEX_H_
#define COLEX_H_

#include <inttypes.h>
#include <stdbool.h>

#include "binom.h"

uint_fast64_t colex_rank_posvect(uint_fast8_t *posvect, uint_fast8_t weight);
uint_fast64_t colex_rank_bitvect(uint_fast8_t bitvect, uint_fast8_t width);
void colex_unrank_posvect(uint_fast64_t rank, uint_fast8_t *posvect, uint_fast8_t weight);
uint_fast64_t colex_unrank_bitvect(uint_fast64_t rank, uint_fast8_t weight);

#endif /* COLEX_H_ */
