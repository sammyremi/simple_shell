#include "shell.h"

int main()
{
	pid_t pid;
	char *buff;
	int x, y;

	size_t n = 10;

	char *path, *fp;

	buff = malloc(sizeof(char) * n);
	fp = malloc(sizeof(char) * n);

	printf("SHELL~(: ");
	
	getline(&buff, &n, stdin);
	
	char *argv[] = {"/bin/pwd",  NULL};

	pid = fork();

	if (pid == -1)
		return -1;

	if (pid == 0)
	{
		int val = execve(argv[0], argv, NULL);

		if (val == -1)
			perror("error");
	}
	else
	{
		wait(NULL);
		printf("done with execve\n");
	}

	return (0);
}
