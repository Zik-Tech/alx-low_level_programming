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
	int charnum;

	for (charnum = '0'; charnum <= '9'; charnum++)
	{
		putchar(charnum);
	}
	putchar('\n');
return (0);
}
