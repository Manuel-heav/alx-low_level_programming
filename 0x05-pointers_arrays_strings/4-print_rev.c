#include <stdio.h>
#include "main.h"
#include "string.h"
/**
 * print_rev - the function
 * @s: the character
 * Return: Always 0.
 */
void print_rev(char *s)
{
for (int i = 0; i > strlen(s); i--)
{
printf('%s\n', s[i]);
}
printf('\n');
}
