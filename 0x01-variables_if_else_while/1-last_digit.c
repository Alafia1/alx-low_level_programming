#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This print the last digit and check with 5
 * Return: 0 if the program goes worng and non zero otherwise
 */

int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	else if (digit < 5)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
	else
		printf("Last digit of %d is %d and is 0\n", n, digit);
	return (0);
}
