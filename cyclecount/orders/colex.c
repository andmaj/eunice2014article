/**
 * Co-lexicographic order
 *
 * Written by Andras Majdan
 * License: GNU General Public License Version 3
 *
 * Report bugs to <majdan.andras@gmail.com>
 */

#include "colex.h"
#include "posvect.h"

uint_fast64_t colex_rank_posvect(uint_fast8_t *posvect, uint_fast8_t weight)
{
	uint_fast64_t sum=0;

	for(uint_fast8_t i=0; i<weight; i++)
		sum += binom[posvect[i]][i+1];

	return sum;
}

uint_fast64_t colex_rank_bitvect(uint_fast8_t bitvect, uint_fast8_t width)
{
	uint_fast8_t posvect[256];
	uint_fast8_t weight;

	weight = posvect_from_bitvect(posvect, bitvect, width);
	return colex_rank_posvect(posvect, weight);
}

void colex_unrank_posvect(uint_fast64_t rank, uint_fast8_t *posvect, uint_fast8_t weight)
{
	int_fast8_t i=weight-1, l;

	while(i>=0)
	{
		l=i;
		while(binom[l][i+1]<=rank)
			++l;
		posvect[i]=l-1;
		rank-=binom[l-1][i+1];	/* !!! */
		i-=1;
	}
}

uint_fast64_t colex_unrank_bitvect(uint_fast64_t rank, uint_fast8_t weight)
{
	int_fast8_t i=weight-1, l;
	uint_fast64_t res=0, mask=1;

	while(i>=0)
	{
		l=i;
		while(binom[l][i+1]<=rank)
			++l;

		res |= mask<<(l-1);
		rank-=binom[l-1][i+1];
		i-=1;
	}

	return res;
}
