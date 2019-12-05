#include "my.h"
void  *threadfun(void *arg)
{
	printf("threa fun .pid=[%5d]\n",getpid());
	return (void *)0;
}
int main()
{
	pthread_t tid;
	int error;
	error=pthread_create(&tid,NULL,threadfun,NULL);
	if(error!=0)
	{
	perror("thread create falide !\n");
	return -1;
	}
	pthread_join(tid,NULL);
	printf("done!\n");
	return 0;
}
