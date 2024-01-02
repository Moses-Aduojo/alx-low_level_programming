#include "main.h"
/**
* swap_int - swap the value of two integer variable
* @a: pointer to first variable
* @b: pointer to second variable
*/


void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
