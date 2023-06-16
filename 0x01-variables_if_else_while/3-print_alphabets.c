#include <stdio.h>

/**
 * main - display alphabet
 *
 * Return: always (0)
 */
int main(void)
{
	char alpha = 'a';
	char ALPHA = 'A';

	while (alpha <= 'z') and (ALPHA <= 'Z')
	{
		putchar(alpha);
		alpha++;
		putchar(ALPHA);
		ALPHA++;
	}
	putchar('\n');
	return (0);
}
