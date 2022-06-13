#include <stdio.h>
#include "main.h"
#include "string.h"
/**
 * puts_half - prints a string
 * @str: variable
 * Return: always 0.
 */
void puts_half(char *str)
{
int l = strlen(str);
if (l % 2 == 0)
{
for (int i = l / 2; i < l; i++)
{
_putchar(str[i]);
}
}
else
{
for (int i = (l - 1) / 2; i < l; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
