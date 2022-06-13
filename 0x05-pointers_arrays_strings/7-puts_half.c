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
if (l % 2 != 0)
{
int l1 = (l - 1) / 2;
while (l1 < l)
{
_putchar(str[l]);
l++;
}
}
else
{
int l2 = l / 2;
while (l2 < l)
{
_putchar(str[l]);
l++;
}
}
}
