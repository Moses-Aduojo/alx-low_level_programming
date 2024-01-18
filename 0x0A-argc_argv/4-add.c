#include <stdio.h>
#include <stdlib.h>

/**
 * main - sum mumeric args recieced by this program
 * @arc: argument count
 * @argv: argument vector
 * Reutrn: 0 on success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
