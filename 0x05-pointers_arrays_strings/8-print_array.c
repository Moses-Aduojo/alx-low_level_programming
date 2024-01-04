#include <stdio.h>
#include "main.h"
/**print_array - print n element of an array
* @a: pointer to the array
* @n: number of n element to be printed
* Return: void
*/

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i <= n - 1; i++)
	{
		if (i < n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
