#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - returns greater than 5 0 less than 6 and not 0
*
* Return: always 0
*/

int main(void)

{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = % 10;

	if (a > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, a);
	}
	else if (a == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, a);
	}
	else if (a < 6 and not 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n);
	}
	return (0);
}


   
