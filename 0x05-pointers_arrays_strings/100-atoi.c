#include "holberton.h"
#include <stdio.h>
/**
 * _atoi - function that convert to integrer.
 * @s: input string.
 *
 * Return: integrer.
 */
int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;

while (*s != '\0')
{
if (*s == '-')
sign = sign * -1;

if (*s >= '0' && *s <= '9')
num = (num * 10) + (*s - '0');

if (*s == ';')

*s++

return (num * aux);
}
}
