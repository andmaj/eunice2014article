/**
 * Binomial coefficients
 *
 * Written by Andras Majdan
 * License: GNU General Public License Version 3
 *
 * Report bugs to <majdan.andras@gmail.com>
 */

#define __STDC_FORMAT_MACROS	/* For C++ */

#include <stdio.h>

#include "binom.h"

uint64_t binom[BINOMN][BINOMN];

/* Pascal's triangle */
void binom_fill()
{
	//printf("BINOMN: %d\n", BINOMN);
	binom[0][0] = 1;	/* 0.row */

	for(uint64_t row=1; row<BINOMN; row++)
		for(uint64_t col=0; col<row+1; col++)
			binom[row][col] = binom[row-1][col-1] + binom[row-1][col];
}

void binom_print()
{
	for(uint64_t row=0; row<BINOMN; row++)
	{
			for(uint64_t col=0; col<BINOMN; col++)
				printf("%" PRIu64 " ", binom[row][col]);

			printf("\n");
	}
}
