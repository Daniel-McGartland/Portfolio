#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	pid_t pid;
	pid = fork();

	if (pid == 0)//child
	{
		printf("child: %d started\n", getpid());
		printf("child: parent = %d\n", getppid());
		printf("child: is going to sleep now\n");
		sleep(25);
		printf("child: has woken up\n");
	}
	else if(pid > 0)//parent
	{
		printf("parent: %d started\n", getpid());
		printf("parent: parent = %d\n", getppid());
	}
	else//fail
	{
		perror("fork error");
	}
	
	char *name;
	((pid == 0) ? (name = "child") : (name = "parent"));
	printf("%s: terminating...\n", name);
	return 0;
}
