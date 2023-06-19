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
    int count = 0;

    for (dig = '0'; dig <= '9'; dig++)
    {
        for (it = dig + 1; it <= '9'; it++)
        {
            if (it > dig)
            {
                if (count > 0)
                {
                    putchar(',');
                    putchar(' ');
                }

                putchar(dig);
                putchar(it);
                count++;
            }
        }
    }

    putchar('\n');
    return 0;
}
