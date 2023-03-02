#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * cap_string - function
 *
 * @str: parameter
 *
 * Return: retutns str
 */

char *cap_string(char *str)
{
	int i, j;
	char sep[] = "\t\n,;.!?\"(){}";
	int sep_len = sizeof(sep) / sizeof(sep[0]);


	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 || (i > 0 && isspace(str[i - 1])))
		{
			str[i] = toupper(str[i]);
		}
		else
		{
			for (j = 0; j < sep_len; j++)
			{
				if (str[i - 1] == sep[j])
				{
					str[i] = toupper(str[i]);
					break;
				}
			}
		}
	}
	return (str);
}

