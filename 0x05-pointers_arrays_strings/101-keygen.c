#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{}|;':\",./<>?";
	const size_t charset_length = sizeof(charset) - 1;
	char password[PASSWORD_LENGTH + 1];
	int i;

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = charset[rand() % charset_length];
	}
	password[PASSWORD_LENGTH] = '\0';
	printf("Generated password: %s\n", password);
	return (0);
}
