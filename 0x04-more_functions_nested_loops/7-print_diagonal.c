#include "main.h"
#include <stdio.h>
/**
 *void print_diagonal -  draws a diagonal line on the terminal.
 *@n: is the number of times the character
 */
void print_diagonal(int n)
{
if (n <= 0)
{
putchar('\n');
}
else
{
int i, j;

for (i = 0 ; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (j == i)
putchar('\\');
else if (j < i)
putchar(' ');
}
putchar('\n');
}
}
}
