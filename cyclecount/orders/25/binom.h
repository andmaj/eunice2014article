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

#ifndef BINOMN
#define BINOMN (25+2)
#endif

extern uint64_t binom[BINOMN][BINOMN];

void binom_fill();

#endif /* BINOM_H_ */
