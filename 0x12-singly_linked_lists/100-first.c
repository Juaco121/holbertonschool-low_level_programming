#include <stdio.h>
void printoverride(void) __attribute__((constructor));
/**
 *printoverride - prints some text before main function is executed
 *
 *Return: void
 */
void printoverride(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
