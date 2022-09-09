#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Description: this program print a-z but ommits e and q;
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'e')
			continue;
		if (alphabet == 'q')
			continue;
		else
			alphabet = tolower(alphabet);
			putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
