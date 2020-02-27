//Author:	Daniel McGartland (danielmcgartland@my.unt.edu)
//Date:		Oct/8/2019
//Description:	uset the fork-exec-wait model to creaate a c program to execute linux commands
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<string.h>

int main()
{
	pid_t pid;
	char command[50];
	int temp;

	while(1)
	{	
		//promp for and read the command
		printf("Minor 2 > ");
		scanf("%[^\n]", command);

		//check for quit command
		if(strcmp(command, "quit") == 0)
		{
			exit(0);
		}

		//variable to store processes
		int ppids[2];
		//check if ppids worked hopefully this stops infinite loop
		if(pipe(ppids) < 0)
		{
			printf("Pipe Failed\n");
		}

		//Fork to start child
		pid = fork();
		
		if(pid == 0)//Child
		{
			//managment of ppids
			close(ppids[0]);
			dup2(ppids[1], STDOUT_FILENO);
			close(ppids[1]);

			//variables to split and store the different parts of the command line
			char *inputs[50];
			char *order;
			char *token = strtok(command, " ");
			order = token;
			inputs[0] = token;
			temp = 1;
			
			//loop for handling all parts of the command
			while(1)
			{
				//get token
				token = strtok(NULL, " ");
				//check if token exists
				if(token == NULL)
				{
					break;
				}
				//store token
				inputs[temp] = token;
				temp++;

			}
			inputs[temp] = NULL;

			//print out for unrecognized commnads
			if(execvp(order, inputs) < 0)
			{
				printf("Command %s not found\n", inputs[0]);
				break;
			}
		}

		else if(pid > 0)//parent
		{
			//close parent pipe
			close(ppids[1]);

			//read and print the results stored in ppid 0 
			while(1)
			{
				//variables for the final print out
				char print[1000];
				int status = read(ppids[0], print, 1000);
				
				//end loop 
				if(status <= 0)
				{
					break;
				}
				print[status] = '\0';

				//finally print the output
				printf("%s", print);
			}
			close(ppids[0]);

			//wait for child
			wait(NULL);
		}
		else//failed
		{
			perror("fork error");
			exit(0);
		}
		getchar();
	}
	return 0;
}
