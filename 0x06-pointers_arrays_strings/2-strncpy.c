#include "holberton.h"
/**
*_strncpy - A function that works like strncpy.
*
*@dest: Pointer to the array.
*@src: Pointer to the array.
*@n: number of bytes to copy.
*Return: Pointer to the resulting string dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}





