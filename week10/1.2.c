#include "my.h"
static  void fun1(){
	printf("invokked  callbackgun!\n");

}
int main(){
	FILE *fp;
	char buf[]="HELLO   \n";
	atexit(fun1);
	printf("%s",buf);
	//printf("hello     ");
	if((fp=fopen("test.txt","w"))==NULL)
	{
		perror("failed to open");
		return -1;
	}

	if(fputs(buf,fp)==EOF)
	{
	perror("failed to fputs");
	return -1;
	
	}	
	exit(0);


}
