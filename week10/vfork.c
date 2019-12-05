#include "my.h"

int main(){
	int var;
	int pid;
	
	var =88;
	
	if ((pid=vfork())<0)
	{
	perror("faild to vfork");
	return -1;
	}
	
	else if(pid==0)
	{
	var++;	

	}
	else
	{
	printf("child pid=%d",pid);
	}
	
	printf("pid =%d,var=%d\n",getpid(),var);
	exit(0);


}
