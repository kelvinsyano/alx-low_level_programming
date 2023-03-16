#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * is_valid_number - number validity
 *
 * @num: parameter
 *
 * Return: awlaways 0
 */

int is_valid_number(char *num)
{
	int i = 0;

	while (num[i])
	{
		if (num[i] < '0' || num[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/**
 * main - main function
 *
 * @argc: parameter
 *
 * @argv: parameter
 *
 * Return: returns 0
 */

int main(int argc, char **argv)
{
	if (argc != 3 || !is_valid_number(argv[1]) || !is_valid_number(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	int i;
	int j; 
	int carry;
	int product;
	int *result;
	int result_len;
	int start;
	char *num1;
	num1 = argv[1];
	char *num2;
	num2 = argv[2];
	int len1;
	int len2;


	len1 = 0, len2 = 0;
	while (num1[len1])
	{
		len1++;
	}
	while (num2[len2])
	{
		len2++;
	}
	result_len = len1 + len2 + 1;
	void *result = calloc(result_len, sizeof(int));

	if (result == NULL)
	{
		printf("Error\n");
		return (98);
	}
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			product = (num1[i] - '0') * (num2[j] - '0') + carry + result[i + j + 1];
			result[i + j + 1] = product % 10;
			carry = product / 10;
		}
		result[i] += carry;
	}
	start = 0;

	while (start < result_len - 1 && result[start] == 0)
	{
		start++;
	}
	for (i = start; i < result_len; i++)
	{
		printf("%d", result[i]);
	}
	printf("\n");
	free(result);
	return (0);
}
