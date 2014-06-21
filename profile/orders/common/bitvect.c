/**
 * Bit vector
 *
 * Written by Andras Majdan
 * License: GNU General Public License Version 3
 *
 * Report bugs to <majdan.andras@gmail.com>
 */

#include <stdio.h>
#include <limits.h>

#include "bitvect.h"

uint_fast64_t bitvect_from_posvect(uint_fast8_t *posvect, uint_fast8_t width)
{
	uint_fast64_t mask=1, ret=0;
	uint_fast8_t idx=0;

	while(idx<width)
		ret |= mask<<posvect[idx++];

	return ret;
}

void bitvect_print(uint_fast64_t bitvect)
{
	bitvect_print_w(bitvect, sizeof(uint_fast64_t)*CHAR_BIT);
}

void bitvect_print_w(uint_fast64_t bitvect, uint_fast8_t width)
{
	uint_fast64_t mask=1;

	while(width--)
	{
		if(bitvect & mask)
			printf("1");
		else
			printf("0");

		mask<<=1;
	}

	printf("\n");
}

