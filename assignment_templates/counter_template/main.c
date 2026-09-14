/*
 ============================================================================
 Author      : 
 Version     :
 Description : 

 ============================================================================
 */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "unit_test.h"

int main(void)
{
	uint16_t iter = 0;

	//unit tests
	counter_inc_test();
	counter_dec_test();
	counter_dual_slope_test();

	return EXIT_SUCCESS;
}
