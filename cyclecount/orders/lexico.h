/**
 * Lexicographic order
 *
 * Written by Andras Majdan
 * License: GNU General Public License Version 3
 *
 * Report bugs to <majdan.andras@gmail.com>
 */

#ifndef LEXICO_H_
#define LEXICO_H_

#include <inttypes.h>
#include <stdbool.h>

#include "binom.h"

uint_fast64_t lexico_rank_posvect(uint_fast8_t *posvect, uint_fast8_t weight, uint_fast8_t width);
uint_fast64_t lexico_rank_bitvect(uint_fast8_t bitvect, uint_fast8_t width);
void lexico_unrank_posvect(uint_fast64_t rank, uint_fast8_t *posvect, uint_fast8_t weight, uint_fast8_t width);
uint_fast64_t lexico_unrank_bitvect(uint_fast64_t rank, uint_fast8_t weight, uint_fast8_t width);

#endif /* LEXICO_H_ */
