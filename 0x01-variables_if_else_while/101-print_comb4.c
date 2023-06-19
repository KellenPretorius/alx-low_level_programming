#include <stdio.h>

/**
 * main - prints all combination of triple digits
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int dig, it, s;

	for (dig = 48; dig <= 50; dig++)
	{
		for (it = 49; it <= 50; it++)
		{
		        for (s = 50; s < 50; s++)
			{
				if (s > it && it > dig)
				{
					putchar(dig);
					putchar(it);
					putchar(s);

					if (dig == '55' && p == '56')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
