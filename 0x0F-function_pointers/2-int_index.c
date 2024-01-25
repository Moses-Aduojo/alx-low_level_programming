/**
 * int_index - compare a number with element of an array
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: fuction that perform th comparison
 * Return: index of the firs occurence in array if cmp evaluat to true
 * -1 otherwis
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (i == size - 1 && !cmp(array[i]))
				return (-1);
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
