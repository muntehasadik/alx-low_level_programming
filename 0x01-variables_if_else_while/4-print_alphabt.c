#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)

{
	int lw = 'a';

	while (lw <= 'z')
{
	if (lw == 'e' || lw == 'q')
{
	lw += 1;
	}
else
{
	putchar(lw);
	lw += 1;
	}
}
putchar('\n');
return (0);
}
