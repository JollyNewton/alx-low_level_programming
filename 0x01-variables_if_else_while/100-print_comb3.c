#include <stdio.h>
/**
 * main - Prints all possible different combination of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 49; n <= 56; n++)
	{
		for (n = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
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

