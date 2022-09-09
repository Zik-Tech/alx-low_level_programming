#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point.
 *
 * Description: this program prints all numbers in base 16.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int num;
	int alpha;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
}
