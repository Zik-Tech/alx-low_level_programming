#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <limits.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: This program will assign a random number,
 * to the variable n each time it is executed.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int lastdigit = n % 10;

	if (lastdigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, lastdigit);
	}
	if (lastdigit == 0)
		printf("Last digit of %d is %d and is 0", n, lastdigit);
	if (lastdigit < 6 && lastdigit != 0)
	{
		printf("Last digit of %d is %d and is less than and not 0\n", n, lastdigit);

	return (0);
}
