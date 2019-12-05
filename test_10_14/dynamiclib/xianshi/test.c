#include "../my.h"
#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>
int main()
{
	int a[]={12,4346,-999,45,32};
	void * handle;
	void(*f1)();
	int(*f2)();
	int(*f3)();
	char *error;
	handle=dlopen("../libdynamic.so",RTLD_LAZY);//
	if(handle==NULL)
	{
	perror("jiazai shibai\n");
	exit(1);

	}
	f1=dlsym(handle,"show");
	if((error=dlerror())!=NULL)
	{
		fprintf(stderr,"1%s\n",error);
		exit(1);

	}
	f2=dlsym(handle,"max");
	if((error=dlerror())!=NULL)
	{
		fprintf(stderr,"2%s\n",error);
		exit(1);

	}
	f3=dlsym(handle,"sum");
	if((error=dlerror())!=NULL)
	{
		fprintf(stderr,"3%s\n",error);
		exit(1);

	}
	printf("ceshi\n");
	f1(a,5);
	printf("hell6\n");
	printf("max=%d\n",f2(a,5));
	printf("hell7\n");
	printf("sum=%d\n",f3(a,5));
	dlclose(handle);
	return 0;



}
