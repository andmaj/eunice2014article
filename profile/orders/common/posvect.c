/**
 * Position vector
 *
 * Written by Andras Majdan
 * License: GNU General Public License Version 3
 *
 * Report bugs to <majdan.andras@gmail.com>
 */

#define __STDC_FORMAT_MACROS	/* For C++ */

#include <stdio.h>
#include <string.h>
#include <limits.h>

#include "posvect.h"

uint_fast8_t posvect_from_bitvect(uint_fast8_t *posvect, uint_fast64_t bitvect, uint_fast8_t width)
{
	uint_fast64_t mask=1;
	uint_fast8_t ones=0, place=0;

	while(place<width)
	{
		if(bitvect & mask)
			posvect[ones++]=place;

		mask<<=1;
		++place;
	}

	memset(&posvect[ones], '\0', sizeof(uint_fast8_t)*CHAR_BIT);

	return ones;
}

void posvect_clear(uint_fast8_t *posvect, uint_fast8_t width)
{
	while(width--)
		posvect[width] = 0;
}

void posvect_print(uint_fast8_t *posvect, uint_fast8_t width)
{
	uint_fast8_t i=0;

	while(i<width)
	{
		printf("%" PRIuFAST8 " ", posvect[i]);
		++i;
	}

	printf("\n");
}
