#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always (0) success
 */

int main(void)
{
	/* the constant 2 below can be replaced with the macro "STDERR_FILENO"*/
	
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);

	return (0);
}
