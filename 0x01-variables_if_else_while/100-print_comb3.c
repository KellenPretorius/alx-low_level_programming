#include <stdio.h>

/**
 * main - prints all combination of double digits
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int dig, it;

	for (dig = '0'; dig <= '9'; dig++)
	{
		for (it = dig + 1; it <= '9'; it++)
		{
			if (it > dig)
			{
				putchar(dig);
				putchar(it);

				if (dig != '8' && it != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
