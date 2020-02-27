#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>

int main()
{
	pid_t pid;
	pid = fork();

	if(pid == 0)//child
	{
		exit(0);
	}
	else if(pid > 0)//parent
	{
		sleep(3);
		system("ps -e -o pid,ppid,stat,user,cmd | grep $USER");
	}
	else//fail
	{
		perror("fork error");
	}
	return 0;
}
