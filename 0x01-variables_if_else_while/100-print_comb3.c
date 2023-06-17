#include <stdio.h>

/**
 * main - Display number combinations
 *
 * Return: always (0)
 */
int main(void)
{
	int n, n1;
	for (n = '0'; n <= '9'; n++)
	{
		for (n1 = '0'; n1 <= '9'; n1++)
		{
			if (n < n1)
			{
				putchar(n);
				putchar(n1);
				if (n != '8' || (n == '8' && n1 != '9'))
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
