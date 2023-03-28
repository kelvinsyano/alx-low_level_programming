#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 * @argc: first
 * @argv: second
 * Return: always 0 or1
 */

int main(int argc, char *argv[])
{
	int cents;
	int coins;
	int quarters;
	int dimes;
	int nickels;
	int pennies;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coins = 0;
	quarters = 0;
	dimes = 0;
	nickels = 0;
	pennies = 0;
	quarters = cents / 25;
	cents %= 25;
	dimes = cents / 10;
	cents %= 10;
	nickels = cents / 5;
	cents %= 5;
	pennies = cents;

	coins = quarters + dimes + nickels + pennies;

	printf("%d\n", coins);
	return (0);
}

