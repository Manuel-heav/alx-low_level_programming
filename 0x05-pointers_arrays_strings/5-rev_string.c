#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * rev_string - the main function
 * @s: the variable
 * Return: always 0.
 */
void rev_string(char *s)
{
int l = strlen(s);
while (l--)
_putchar(s[l]);
_putchar('\n');
}
