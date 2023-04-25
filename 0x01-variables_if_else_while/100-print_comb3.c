#include <stdio.h>
/**
 * main -Entry point
 * description: prints all possible different combinations of two digits
 * Return: 0 (success)
 */
int main(void)
{
int tens = '0';
int ones = '0';

for (tens == 0; tens <= 9; tens++)
{
for (ones == 0; ones <= 9; ones++)
{
if (!((ones == tens) || (tens > ones)))
{
putchar(tens);
putchar(ones);
}
}
}
putchar('\n');
return (0);
}

