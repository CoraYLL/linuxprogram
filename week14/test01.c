#include "my.h"
#define NUM_THREADS 8
void *PrintHello(void *threadid)
{
	int *id_ptr,taskid;

	//sleep(1);

	id_ptr=(int *)threadid;
	taskid=*id_ptr;
	printf("\t hello from thread %d\n",taskid);
	pthread_exit(NULL);

}
int main (int argc,char *argv[]){
	pthread_t threads[NUM_THREADS];
	int rc,t;
	for(t=0;t<NUM_THREADS;t++)
	{
	printf("creating  thread %d\n",t);
	rc=pthread_create(&threads[t],NULL,PrintHello,(void*)&t);
		if(rc)
		{
		printf("error;return code is %d\n",rc);
		exit(-1);
		}

	}
	pthread_exit(NULL);

}

