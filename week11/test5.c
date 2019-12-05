#include "my.h"
int main(){
	int pid ,status,r;
	if((pid=fork())<0)
	{
	perror("failed to fork!!!!\n");
	return -1;
	

	}
	else if(pid==0)
	{
	printf("%d :chhild is running now \n",getpid());
	//sleep(100);
	printf("%d :chhild is exit now \n",getpid());
	exit(90);
	
	}
	else 
	{	
	printf("%d :parent is waiting jiangshi now \n",getpid());
	//r=waitpid(pid,&status,0);
	r=waitpid(pid,&status,WNOHANG);
	printf("parent waiting %d,exit code =%d,return code =%d\n",pid,WEXITSTATUS(status),r);
	printf("%d:parent is exiting now\n",getpid());
	}
	exit(0);
}

