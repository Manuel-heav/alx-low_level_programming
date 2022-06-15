#include <stdio.h>
#include "main.h"
/**
 * _strcat - The function
 * @dest: first value
 * @src: second value
 * Return: always 0.
 */
void _strcat(char *dest, char *src)
{
char x;
x = dest + " " + src;
printf("%s", x)
}
