#include <stdio.h>
#include <ctype.h>
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
		alpha = tolower(alpha);
	}
	putchar('\n');
	return (0);
}
