#include <stdio.h>

/**
 * main - display alphabet
 *
 * Return: always (0)
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
