#include <stdio.h>

/**
 * main - this will print alphabet in lowercase
 * Return: 0 if the program fails and non zero otherwise
 */

int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
		putchar(abc);
	putchar('\n');
	return (0);
}
