#include <stdio.h>

void _strtok(const *str, char delimeter)
{
	int len = strlen(str);
	char wrd[len + 1];
	int j, k;

	for (j = 0; j <= len; j++)
	{
		k = 0;
		if (str[j] == delimeter || str[j] == '\0')
			wrd[k] = '\0';
		if (k > 0)
		{
			printf("%s\n", wrd);
			k = 0;
		}
		else
		{
			wrd[k] = str[j];
			k++
		}
	}
}
