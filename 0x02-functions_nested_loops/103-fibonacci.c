#include <stdio.h>

/**
* main - main block
* Description: computes and prints even  number < 4,000,000
* 5 below 1024 (excluded), followed by a new line
*
* Return: nothing
*/

int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = k;

	while (k + j < 4000000)
	{
		k += j;
		a = b;
		if (k % 2 == 0)
			sum += k;
		j = k - j;
		++i;
	}
	printf("%ld\n", sum);
	return (0);
}
