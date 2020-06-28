#include "holberton.h"
#include <stdlib.h>

/**
* _strchr - a function that locates a character in a string
* @s: pointer to string
* @c: character to be found and printed
*
* Return: pointer to first occurence of the character c, or NULL if not found
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	s++;
		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);
}
