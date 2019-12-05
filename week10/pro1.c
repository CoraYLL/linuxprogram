#include "my.h"
char a[10]={0};
int g=9999;

int main(){
	int s=8888;
	static int k=6666;
	printf("var address in pro1:&a=%p,&g=%16p ,&s=%16p ,&k=%16p\n",a,&g,&s,&k);
	for(int i=0;i<10;i++)
		printf("prol%d:run %d time !\n",getpid(),i);
}
