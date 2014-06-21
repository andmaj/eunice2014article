/**
 * Lexicographic order
 *
 * Written by Andras Majdan
 * License: GNU General Public License Version 3
 *
 * Report bugs to <majdan.andras@gmail.com>
 */
 
#include <inttypes.h>
#include "binom.h"
#include "lexico-onebit.h"

/* opt4-onebit */
uint_fast8_t lexico_unrank_onebit(
		uint_fast64_t rank,
		uint_fast8_t weight,
		uint_fast8_t width,
		uint_fast8_t bit)
{
	uint_fast64_t v;

	if(weight<=width/2)
	{
		while(weight)
		{
			// shifted binom table
			v = binom[width][weight];
			if(v>rank)
			{
				if(!bit) return 1;
				--weight;
			}
			else
				rank -= v;
		
			if(!bit--) return 0;	
			--width;
		}
		return 0;
	}
	else
	{
		weight=width-weight;
		while(weight)
		{
			// shifted binom table
			v = binom[width][weight];
			if(v>rank)
			{
				if(!bit) return 0;
				--weight;
			}
			else
				rank -= v;
			
			if(!bit--) return 1;
			--width;
		}
		return 1;
	}
}
