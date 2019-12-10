#include "my.h"
static int i=9;
void *fun (void *arg)
{
	//int *i=(int *)malloc(sizeof(int));
	printf("tid=%p\n",(unsigned int)pthread_self());
	//*i=99;
	printf("i=%d,&i=%p\n",i,&i);
	pthread_exit((void*)&i);


}
int main(){
	pthread_t tid;
	int ret,*rv;
	ret=pthread_create(&tid,NULL,fun,NULL);
	if(ret!=0)
	{
	perror("faiked !\n");
	return -1;	


	}
pthread_join(tid,(void**)&rv);
printf("rv=%d,rv=%p\n",*rv,rv);
return 0;

}
