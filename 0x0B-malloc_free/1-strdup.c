#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - print dublicate
 * @str: str
 *
 * Return: return dub
 */

char *_strdup(char *str)
{
	char *dup_str;

	if (str == NULL)
		return (NULL);
	dup_str = malloc(strlen(str) + 1);
	if (dup_str == NULL)
		return (NULL);
	strcpy(dup_str, str);
	return (dup_str);
}

