#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Description: This program print lowercase alphabet in reverse.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
