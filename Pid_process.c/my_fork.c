#include <stdio.h>
#include <unistd.h>


int main(void)
{
	fork();
	fork();
	fork();
	printf("%u Is my pid\n", getpid());

	return (0);
}
