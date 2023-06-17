#include <stdio.h>

/**
 * main - Display number combinations
 *
 * Return: always (0)
 */
int main(void)
{
	int n, o, p;

	for (n = '0'; n <= '9'; n++)
	{
		for (o = '0'; o <= '9'; o++)
		{
			for (p = '0'; p <= '9'; p++)
			{
				if (n < o && o < p)
				{
					putchar(n);
					putchar(o);
					putchar(p);

					if (n < '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return(0);
}
