#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	size_t n = 10;
	char *buff = NULL;


	printf("root@a8044e76ab65$ ");
	getline(&buff, &n, stdin);
	printf("%s", buff);

	free(buff);

	return (0);
}
