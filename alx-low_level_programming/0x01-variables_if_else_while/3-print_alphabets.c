#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in upper case
 * Return: 0
 */
int main(void)
{
	int k = 97;
	int j = 65;

	while (k <= 122)
	{
		putchar(k);
		k++;
	}
	while (j <= 90)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
