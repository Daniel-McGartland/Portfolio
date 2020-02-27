#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>
#include<sys/wait.h>
#include<time.h>

void signal_alarm()
{
	printf("buzz buzz buzz\n");
}

int main(int argc, char *argv[])
{
	int Rnum, num;

	if(argc != 2)
	{
		printf("invalid entry\n");
		exit(0);
	}
	srand(time(0));
	Rnum = (rand()%(10-5+1))+5;

	printf("alarm application starting: %d\n",Rnum);

	void(*pfRet)(int)=signal(SIGALRM,signal_alarm);

	pid_t pid;
	pid = fork();

	if(pid == 0)//child
	{
		for(int i =1; i <= *argv[2]; i++)
		{
			printf("%d: tick-tock\n", i);
		}
		if(*argv[2]<Rnum)
		{
			//kill(getppid, SIGALRM);
		}
		else
		{
			raise(SIGALRM);
		}
	}
	else if(pid > 0)//parent
	{
		alarm(Rnum);
		pause();
		//wait();
	}
	else//fail
	{
		perror("fork error");
	}
	return 0;
}
