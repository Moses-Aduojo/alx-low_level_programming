#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two number
 * @argc: number of arg recieved
 * @argv: pointer to array of string of number to be multiplied
 * Return: 0 on success 1 otherwise
 */
int main(int argc, char *argv[])
{
	int product;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	product = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", product);
	return (0);
}
