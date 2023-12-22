#include "main.h"
/**
* print_triangle - print variable size triangle
* @size: determine size of the triangle
*Return: void
*/

void print_triangle(int size)
{
        int i = size;
        int j;
        int k;

        for (j = 0; j <= i;  j++)
        {
                k = 0;
                for (k = 0; k <= i; k++)
                {
                        if (k < i - j)
                                _putchar('#');
                        _putchar(' ');
                }
                _putchar('\n');
        }
}
