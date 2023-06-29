#include "main.h"

/**
 * reverse_array - function that reverse an array
 * @a: pointer of the array
 * @n: array number of elements
 */

void reverse_array(int *a, int n)
{
	int i, x;

	i = 0;
	for (i = 0; i < n; i++)
	{
		n--;
		x = a[i];
		a[i] = a[n];
		a[n] = x;
	}
}
