/**
 * Lexicographic order
 *
 * Written by Andras Majdan
 * License: GNU General Public License Version 3
 *
 * Report bugs to <majdan.andras@gmail.com>
 */

#include "lexico.h"
#include "posvect.h"

uint_fast64_t lexico_rank_posvect(
		uint_fast8_t *posvect,
		uint_fast8_t weight,
		uint_fast8_t width)
{
	uint_fast64_t sum=0;
	int_fast64_t v;

	for(uint_fast8_t i=0; i<weight; i++)
	{
		if(i==0)
			v = 0;
		else
			v = posvect[i-1]+1;

		while(v < posvect[i])
		{
			sum += binom[width-(v+1)][weight-(i+1)];
			++v;
		}
	}

	return sum;
}

uint_fast64_t lexico_rank_bitvect(uint_fast8_t bitvect, uint_fast8_t width)
{
	uint_fast8_t posvect[256];
	uint_fast8_t weight;

	weight = posvect_from_bitvect(posvect, bitvect, width);
	return lexico_rank_posvect(posvect, weight, width);
}

/* normal */
void lexico_unrank_posvect(
		uint_fast64_t rank,
		uint_fast8_t *posvect,
		uint_fast8_t weight,
		uint_fast8_t width)
{
	uint_fast8_t i=0, t=0;
	uint_fast64_t v;

	while(i<weight)
	{
		v = binom[width-1-t][weight-i-1];
		if(v>rank)
			posvect[i++] = t;
		else
			rank -= v;
		++t;
	}
}

/* normal */
uint_fast64_t lexico_unrank_bitvect(
		uint_fast64_t rank,
		uint_fast8_t weight,
		uint_fast8_t width)
{
	uint_fast8_t i=0, t=0;
	uint_fast64_t v, res=0, mask=1;

	while(i<weight)
	{
		v = binom[width-1-t][weight-i-1];
		if(v>rank)
		{
			res |= mask<<t;
			++i;
		}
		else
			rank -= v;
		++t;
	}

	return res;
}
