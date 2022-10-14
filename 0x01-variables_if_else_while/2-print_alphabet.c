#include <stdio.h>

/**
 * main - this will print alphabet in lowercase
 * Return: 0 if the program fails and non zero otherwise
 */

int main(void)
{
	char abc[26];
	int i;

	abc[26] = "abcdefghijklmnopqrstuvwxyz";
	for(i = 0;i < 26;i++)
		putchar(abc[i]);
	return (0);
}
