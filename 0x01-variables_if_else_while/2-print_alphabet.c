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
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
		putchar(\n);

	}
	return (0);
}
