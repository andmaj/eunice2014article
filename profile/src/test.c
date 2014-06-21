#include <stdio.h>
#include <stdlib.h>

#include "test-include.h"
#include "test-userdata.hdef"

int main()
{
	#include "test-init.h"
	#include "test-code.h"

	return 0;
}
