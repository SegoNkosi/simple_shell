#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void)
{
	pid_t new_pid;
	int status;
	int r;
	char *args[] = {"ls", "-1", "/tmp", NULL};

	for (r = 1; r <= 5; r++)
	{
		new_pid = fork();
		if (new_pid == -1)
		{
			perror("Error:");
			return (1);
		}

	}
	if (new_pid == 0)
	{
		execve("/usr/bin/ls", args, NULL);
		perror("Error:");
		exit(1);
	}
	else
	{
		/*parents*/
		wait(&status);
	}
}
