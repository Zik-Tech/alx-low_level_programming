#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Description: this program prints the lower case and then uppercase.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		alphabets = tolower(alphabets);
		putchar(alphabets);
	}
	for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
	{
		alphabets = toupper(alphabets);
		putchar(alphabets);
	}
		putchar('\n');
	return (0);
}
