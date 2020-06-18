#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 * with number Hexadecimals
 * Return: Always 0.
 */
int _isupper(int c)
{
    if (c >= 0x41 && c <= 0x5A)
    {
        return (1);
    }
    else 
    {
        return (0);
    }
}