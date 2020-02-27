//Daniel McGartland (danielmcgartland@my.unt.edu)
#include<signal.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
#include<fcntl.h>
#include<sys/types.h>

void sighandler(int signo);

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("djm0265A.c: not a valid command line argument\n");
		exit(0);
	}
	
	int status;
	pid_t pid;
	pid = fork();
	int fd;

	//open the file name stored in *argv[2]
	//fd = *argv[2]
	void(*pfRet)(int)= signal(SIGCHLD, sighandler);
	

	if(pid == 0)//child
	{
		dup2(fd,1);
		close(fd);
		printf("this is the sentance");
	}
	else if(pid > 0)//parent)
	{
		close(fd);
		wait(&status);
		printf("parent process has completed\n");
	}
	else//fail
	{
		perror("fork error");
	}

	return 0;
}

void sighandler(int signo)
{
	printf("SIGCHLD was caught whaen child terminated");
}
