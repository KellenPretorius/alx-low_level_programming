#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints alphabet in lower case
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	return (0);
}
