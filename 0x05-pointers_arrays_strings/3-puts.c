#include "main.h"
#include <stdio.h>
/**
 *_puts -  function that prints a string
 *@str: string to print
 */
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str++);
}
putchar('\n');
}
