#include <stdio.h>

/**
 * main - display alphabet
 *
 * Return: always (0)
 */
int main(void)
{
	int n = '0';

	while (n <= '8')
	{
		putchar(n);
		n++;
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	return (0);
}
