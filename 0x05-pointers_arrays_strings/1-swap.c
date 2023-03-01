#include <stdio.h>

/**
 * Swap_nt - is a script that swaps the value of two integers.
 * *a is the integer to be  swapped.
 * *b is the  integer to swap to.
 */
void swap_int(int *a, int *b)
/* The script that swaps the value of two integers*/
{
	int temp = *a;
	*a = *b;
	*b = temp;

}
