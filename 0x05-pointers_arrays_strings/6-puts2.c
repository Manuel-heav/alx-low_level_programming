#include <stdio.h>
#include "main.h"
#include "string.h"
/**
 * puts2 - prints a string
 * @str: variable
 * Return: always 0.
 */

void puts2(char *str)
{
int i = 0;
int l = strlen(str);
while (i < l)
{
_putchar(str[i * 2]);
i++;
}
_putchar('\n');
}
