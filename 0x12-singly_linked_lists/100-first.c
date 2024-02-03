#include <stdio.h>

/**
 * myStartupFun - Function to be executed before main.
 *
 * Description: This function is executed before the main function is called.
 * It can be used for initialization or other setup tasks.
 */
void __attribute__ ((constructor)) myStartupFun()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

