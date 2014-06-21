/**
 * Test of orders
 *
 * Written by Andras Majdan
 * License: GNU General Public License Version 3
 *
 * Report bugs to <majdan.andras@gmail.com>
 */

#define __STDC_FORMAT_MACROS	/* For C++ */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "binom.h"
#include "lexico.h"
#include "colex.h"
#include "posvect.h"
#include "bitvect.h"
#include "table.h"

#define WEIGHT_MAX 6

int main(void)
{

	binom_fill();
	table_generate(WEIGHT_MAX);

	uint_fast8_t posvect[WEIGHT_MAX], posvect2[WEIGHT_MAX], ones;
	uint_fast8_t *posvect_ptr = NULL;
	uint_fast64_t rank, bmax, bv, bv2;

	posvect_clear(posvect, WEIGHT_MAX);

	for(uint_fast8_t weight=0; weight<=WEIGHT_MAX; weight++)
	{
		printf("\nw=%" PRIuFAST8 "\n", weight);
		bmax = binom[WEIGHT_MAX][weight];

		for(uint_fast8_t i=0; i<bmax; i++)
		{
			printf("  input rank=%" PRIuFAST8 "\n", i);
			printf("  COLEX\n");
			colex_unrank_posvect(i, posvect, weight);
			printf("    posvect for rank (colex unrank)= ");
			posvect_print(posvect, WEIGHT_MAX);

			printf("    bitvect from posvect= ");
			bv = bitvect_from_posvect(posvect, weight);
			bitvect_print_w(bv, WEIGHT_MAX);
			printf("    posvect from bitvect= ");
			ones = posvect_from_bitvect(posvect2, bv, WEIGHT_MAX);
			posvect_print(posvect2, WEIGHT_MAX);
			printf("    ones= %" PRIuFAST8 "\n", ones);
			bv2 = colex_unrank_bitvect(i, weight);
			printf("    bitvect for rank (colex unrank)= ");
			bitvect_print_w(bv2, WEIGHT_MAX);

			rank=colex_rank_posvect(posvect, weight);
			printf("    rank for posvect (colex rank)= %" PRIuFAST64 "\n", rank);
			posvect_clear(posvect, WEIGHT_MAX);
			posvect_clear(posvect2, WEIGHT_MAX);

			printf("  LEXICO\n");
			lexico_unrank_posvect(i, posvect, weight, WEIGHT_MAX);
			printf("    posvect for rank (lexico unrank)= ");
			posvect_print(posvect, WEIGHT_MAX);

			printf("    bitvect from posvect= ");
			bv = bitvect_from_posvect(posvect, weight);
			bitvect_print_w(bv, WEIGHT_MAX);
			printf("    posvect from bitvect= ");
			ones = posvect_from_bitvect(posvect2, bv, WEIGHT_MAX);
			posvect_print(posvect2, WEIGHT_MAX);
			printf("    ones= %" PRIuFAST8 "\n", ones);

			bv2 = lexico_unrank_bitvect(i, weight, WEIGHT_MAX);
			printf("    bitvect for rank (lexico unrank)= ");
			bitvect_print_w(bv2, WEIGHT_MAX);

			rank=lexico_rank_posvect(posvect, weight, WEIGHT_MAX);
			printf("    rank for posvect (lexico rank)= %" PRIuFAST64 "\n", rank);
			posvect_clear(posvect, WEIGHT_MAX);
			posvect_clear(posvect2, WEIGHT_MAX);

			printf("  TABLE\n");
			table_unrank_posvect(i, &posvect_ptr, weight);
			printf("    posvect for rank (table unrank)= ");
			posvect_print(posvect_ptr, weight);

			printf("    bitvect from posvect= ");
			bv = bitvect_from_posvect(posvect_ptr, weight);
			bitvect_print_w(bv, WEIGHT_MAX);
			printf("    posvect from bitvect= ");
			ones = posvect_from_bitvect(posvect2, bv, WEIGHT_MAX);
			posvect_print(posvect2, WEIGHT_MAX);
			printf("    ones= %" PRIuFAST8 "\n", ones);

			bv2 = table_unrank_bitvect(i, weight);
			printf("    bitvect for rank (lexico unrank)= ");
			bitvect_print_w(bv2, WEIGHT_MAX);

			posvect_clear(posvect, WEIGHT_MAX);
			posvect_clear(posvect2, WEIGHT_MAX);

		}

	}

	return EXIT_SUCCESS;
}
