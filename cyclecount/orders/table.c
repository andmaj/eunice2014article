/**
 * Position vector pre-computed table
 * (based on lex)
 *
 * Written by Andras Majdan
 * License: GNU General Public License Version 3
 *
 * Report bugs to <majdan.andras@gmail.com>
 */

//#include <stdio.h>
#include <stdlib.h>

#include "table.h"
#include "binom.h"
#include "lexico.h"

size_t *bvt_offsets;
size_t *pvt_offsets;
uint_fast64_t *bitvecttable;
uint_fast8_t *posvecttable;

// TODO: this code is extremely dumb, make it faster
void table_generate(uint_fast8_t width)
{
	uint_fast64_t maxrank;
	size_t bv_idx = 0, pv_idx = 0, mem4bvt = 0, mem4pvt = 0;

	bvt_offsets = (size_t*)malloc( sizeof(size_t) * (width+1) );
	pvt_offsets = (size_t*)malloc( sizeof(size_t) * (width+1) );

	for(uint_fast8_t weight=0; weight<=width; weight++)
	{
		mem4bvt += binom[width][weight];
		mem4pvt += binom[width][weight] * weight;
	}

	bitvecttable = (uint_fast64_t*)malloc( sizeof(uint_fast64_t) * mem4bvt );
	posvecttable = (uint_fast8_t*)malloc( sizeof(uint_fast8_t) * mem4pvt );
	
	//printf("bit: %lu (bytes)\n", (unsigned long) sizeof(uint_fast64_t) * mem4bvt);
	//printf("pos: %lu (bytes)\n", (unsigned long) sizeof(uint_fast8_t) * mem4pvt);

	for(uint_fast8_t weight=0; weight<=width; weight++)
	{
		bvt_offsets[weight] = bv_idx;
		pvt_offsets[weight] = pv_idx;
		maxrank = binom[width][weight];

		for(uint_fast64_t rank=0; rank<maxrank; rank++)
		{
			bitvecttable[bv_idx++] = lexico_unrank_bitvect(rank, weight, width);
			lexico_unrank_posvect(rank, &posvecttable[pv_idx], weight, width);
			pv_idx += weight;
		}
	}
}

// TODO: implement table_rank_posvect
uint_fast64_t table_rank_posvect(uint_fast8_t *posvect, uint_fast8_t weight)
{
	return 0;
}

// TODO: implement table_rank_bitvect
uint_fast64_t table_rank_bitvect(uint_fast64_t bitvect, uint_fast8_t weight)
{
	return 0;
}

void table_unrank_posvect(
		uint_fast64_t rank,
		uint_fast8_t **posvect,
		uint_fast8_t weight)
{
	*posvect = &posvecttable[pvt_offsets[weight] + rank*weight];
}

uint_fast64_t table_unrank_bitvect(uint_fast64_t rank, uint_fast8_t weight)
{
	return bitvecttable[bvt_offsets[weight] + rank];
}
