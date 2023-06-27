#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
    int i;
    
    for (i = strlen(str) / 2; i < strlen(str); i++)
    {
        putchar(str[i]);
    }
	_putchar('\n');
}
