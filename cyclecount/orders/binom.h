/**
 * Binomial coefficients
 *
 * Written by Andras Majdan
 * License: GNU General Public License Version 3
 *
 * Report bugs to <majdan.andras@gmail.com>
 */

#ifndef BINOM_H_
#define BINOM_H_

#include <inttypes.h>

#ifdef WIDTH
#ifndef BINOMN
#define BINOMN (WIDTH+2)
#endif
#endif

extern uint64_t binom[BINOMN][BINOMN];

void binom_fill();

#endif /* BINOM_H_ */
