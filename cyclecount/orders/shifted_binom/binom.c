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

/* Shifted binomial table */
void binom_fill()
{
	binom[1][1] = 1;	// 1.row, 1.col

	for(uint64_t row=2; row<BINOMN; row++)
		for(uint64_t col=1; col<row+1; col++)
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
