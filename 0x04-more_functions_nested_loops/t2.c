#include "main.h"

/**
 * print_triangle - prints a triangle of '#' characters
 * @size: the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
    if (size <= 0)
    {
        _putchar('\n');
    }
    else
    {
        int i, j, spaces;

        for (i = 0; i < size; i++)
        {
            spaces = size - i - 1;

            /* Print leading spaces */
            for (j = 0; j < spaces; j++)
            {
                _putchar(' ');
            }

            /* Print '#' characters */
            for (j = 0; j <= i; j++)
            {
                _putchar('#');
            }

            _putchar('\n');
        }
    }
}

