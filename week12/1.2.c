#include "my.h"
/*
int main (){
	pid_t p1,p2,p3;
	p1=fork();
	p2=fork();
	p3=fork();
	if(p1<0||p2<0||p3<0)
	{perror("fork failed .\n");
	return -1;
	}
	else if(p1==0)
	{
	printf("ppid=%d  pid =%d\n",getppid(),getpid());
	exit(0);
	}
	else if(p2==0)
	{
	printf("ppid=%d  pid =%d\n",getppid(),getpid());
	exit(0);
	}
	else if(p3==0)
	{
	printf("ppid=%d  pid =%d\n",getppid(),getpid());
	exit(0);
	}
	else{
	wait(NULL);
	wait(NULL);
	wait(NULL);
	printf("parent  successful\n");
	return 0;
	}

}
*/
int  count =0;
int main()
{
	pid_t p1,p2,p3;
	printf("fork first times\n");
	p1=fork();
	int s1,s2,s3,r1,r2,r3;
	if(p1<0)
	{
	perror("fork 1  failed \n");
	return -1;
	}
	else if(p1==0)
	{
	count+=1;
	printf("child pid=%d,ppid=%d,count=%d\n",getpid(),getppid(),count);
	exit(99);
	}

	else 
	{
		printf("fork second times\n");
		p2=fork();
		if(p2<0)
		{
		perror("fork 2 filed\n");
		return -1;
		}
		else if(p2==0)
		{
		count+=1;
		printf("child pid=%d,ppid=%d,count=%d\n",getpid(),getppid(),count);
		exit(34);
		}
		else
		{
			printf("fork third times\n");
			p3=fork();
			if(p3<0)
			{
			perror("fork 2 filed\n");
			return -1;
			}
			else if(p3==0)
			{
			count+=1;
			printf("child pid=%d,ppid=%d,count=%d\n",getpid(),getppid(),count);
			exit(77);
			}
			else{
				printf("parent  waiting \n");
				r1=wait(&s1);
				r2=wait(&s2);
				r3=wait(&s3);
				printf("r1=%d,s1=%d.r2=%d,s2=%d.r3=%d,s3=%d.",r1,WEXITSTATUS(s1),r2,WEXITSTATUS(s2),r3,WEXITSTATUS(s3));
				printf("parent  pid=%d .count=%d\n",getpid(),count);
				return 0;
				}
		}
	}

}
