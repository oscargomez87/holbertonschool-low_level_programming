#include <stdio.h>

/**
 * premain - prints a message before main is runed
 */
void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
