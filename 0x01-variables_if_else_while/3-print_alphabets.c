#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: The function prints lower case characters followed by uppercase
 *letter.
 *Return: 0 when run to successful completion
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	char letter = 'A';

	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
