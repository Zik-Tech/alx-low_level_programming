#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Description: This program prints all single digit numbers of base 10,
 *starting from 0, followed by a new line.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
return (0);
}
