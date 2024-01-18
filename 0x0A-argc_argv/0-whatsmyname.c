#include <stdio.h>

/**
 * main - print the name of this program
 * @argc: number of argument
 * @argv: pointer to array of argument
 * Return: 0 on success 1 otherwise
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
	else
		return (1);
}
