#include <stdio.h>
/**
 * main - print first fabionacci numbers 50
 * Return: always 0
 */
int main(void)
{
	long int a, b, c, round;

	a = 1;
	b = 2;


	for (c = 1; c <= 50; c++)
	{
		if (b != 20365011074)
		{
			printf("%ld, ", b);
		}
		else
		{
			printf("%ld\n", b);
		}
		round = a + b;
		a = b;
		b = round;
	}

	return (0);
}
