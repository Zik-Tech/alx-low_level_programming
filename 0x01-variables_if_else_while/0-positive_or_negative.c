#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include <limits.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: This program will assign a random number,
 * to the variable n each time it is executed.
 * Complete the source code in order to print,whether
 * the number stored in the variable n is positive or negative.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
	/* if the number is greater than 0 print this */
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{
	/* if the number is 0 print this */
		printf("%d is zero\n", n);
	}
	if (n < 0)
	{
	/* if the number is less then 0 print this */
		printf("%d is negative\n", n);
	}
	return (0);
}
