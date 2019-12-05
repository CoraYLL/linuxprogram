#include "my.h"

int main(){
	
	pid_t pid=fork();
	FILE* fp;
	fp=fopen("test1.dat","a+");

	if(fp==NULL){
		printf("open filed !\n");
	return -1;

	}
	if(pid<0){
	printf("fork filed!!!\n");
	}
	else if(pid==0){
		printf("this is child write,child pid is %d\n",getpid());
		char buf[]="this is Child write file\n";
		if(fputs(buf,fp)==EOF){
			printf("failed  to fputs\n");
		}
		fclose(fp);//在fork所创建的子进程执行后，将文件指针关闭，但是父进程依旧能够写入，所以vfork的父子进程也拥有各自独立的文件指针 .
		exit(0);
	}
	else{
	printf("this is parent write,parent pid is %d\n",getpid());
	char buf[]="this is parent write file!!!\n";
		if(fputs(buf,fp)==EOF){
			printf("failed  to fputs\n");
		}
		fclose(fp);		
	}					
	return 0;


}
