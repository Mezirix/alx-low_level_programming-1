#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of number generated randomly
 * and wether it is greater than 5, lesser than 6, or zero
 *
 *Return: Always 0
 */
int main(void)
{
		int n ;
		srand(time(0));
		n = rand() RAND_MAX / 2;
		if ((n % 10) > 5;
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
		}
		else if ((n % 10) < 6 && (n % 10) != 0)
		return (0);

}
