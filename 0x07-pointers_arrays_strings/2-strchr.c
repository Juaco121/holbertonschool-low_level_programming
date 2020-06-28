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
	int i;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
		if (s[i] == c)
		{
			return (s + i);
		}	
	}	
	return (NULL);
}
