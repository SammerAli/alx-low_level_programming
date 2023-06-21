#include <stdio.h>
/**
 * main - print first fabionacci numbers
 * Return: always 0
 */
int main(void)
{
	int i;
	long int a, b, round, sum;

	a = 1;
	b = 2;
	sum = 0;

	for (i = 1; i <= 33; i++)
	{
		if (a < 4000000 && (a % 2) == 0)
		{
			sum += a;
		}
		round = a + b;
		a = b;
		b = round
	}
	printf("%lu\n", sum);

	return (0);
}
