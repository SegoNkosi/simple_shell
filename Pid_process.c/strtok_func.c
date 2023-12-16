#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char *str = "This is separated";
	char *stc = malloc(sizeof(char) * strlen(str));
	char delimed[5] = " ";
	char *portion;
	int k;

	strcpy(stc, str);
	portion = strtok(stc, delimed);
	/*printf("%p\n %p\n", str, portion);*/

	while (portion != NULL)
	{
		printf("%s\n", portion);
		portion = strtok(NULL, delimed);	
	}
	for (k = 0; k < 35; k++)
	{
		if (stc[k] == '\0')
			printf("\\0");
		else
			printf("%c", stc[k]);
	}

	return (0);
}
