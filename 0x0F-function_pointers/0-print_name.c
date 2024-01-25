

/**
 * print_name - call a function that print name
 * @name: name to be printed
 * @f: pointer to a function called to print the name
 * Return: void
 */


void print_name(char *name, void (*f)(char *))
{
	f(name);
}
