#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: this program writes a-z,
 * its called the alphabet game.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	putchar(alpha);
	}
	return (0);
}