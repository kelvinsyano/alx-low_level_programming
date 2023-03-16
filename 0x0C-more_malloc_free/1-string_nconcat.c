#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function to concatenate str
 *
 * @s1: parameter 1
 *
 * @s2: parameter 2
 *
 * @n: parameter 3
 *
 * Return: returns new str
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int s1_len, s2_len, copy_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	if (n >= s2_len)
		copy_len = s2_len;
	else
		copy_len = n;
	new_str = malloc(s1_len + copy_len + 1);
	if (new_str == NULL)
		return (NULL);
	memcpy(new_str, s1, s1_len);
	memcpy(new_str + s1_len, s2, copy_len);
	new_str[s1_len + copy_len] = '\0';
	return (new_str);
}
