/**
 * Position vector pre-computed table
 * (based on lex)
 *
 * Written by Andras Majdan
 * License: GNU General Public License Version 3
 *
 * Report bugs to <majdan.andras@gmail.com>
 */

#ifndef TABLE_H_
#define TABLE_H_

#include <inttypes.h>

#include "binom.h"

void table_generate(uint_fast8_t width);
uint_fast64_t table_rank_posvect(uint_fast8_t *posvect, uint_fast8_t weight);
uint_fast64_t table_rank_bitvect(uint_fast64_t bitvect, uint_fast8_t weight);
void table_unrank_posvect(
		uint_fast64_t rank,
		uint_fast8_t **posvect,
		uint_fast8_t weight);
uint_fast64_t table_unrank_bitvect(uint_fast64_t rank, uint_fast8_t weight);

#endif /* TABLE_H_ */
