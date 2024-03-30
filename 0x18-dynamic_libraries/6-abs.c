/**
*_abs - Compute absolute value of an integer
*@n: intger whose abs value is computed
*Return: abs value
*/

int _abs(int n)
{
	int i = n;

	if (i < 0)
		return (-1 * i);
	if (i > 0)
		return (i);
	return (0);
}
