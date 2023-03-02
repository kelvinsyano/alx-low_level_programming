/**
 * leet - function
 *
 * @str: parameter
 *
 * Return: returns str
 */

char *leet(char *str)
{
	char *replace = "aAeEoOtTiL";
	char *with = "44337071";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; replace[j] != '\0'; j++)
		{
			if (str[i] == replace[j])
			{
				str[i] = with[j];
				break;
			}
		}
	}
	return (str);
}
