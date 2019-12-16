#include "my.h"
pthread_rwlock_t rwlock;
int g=0;
void *fun(void *param)
{
	int i;
	//pthread_rwlock_wrlock(&rwlock);  //right
	pthread_rwlock_rdlock(&rwlock);	//lack 
	for(i=0;i<LOOP;i++)
	{
	g++;

	}
	pthread_rwlock_unlock(&rwlock);
	return NULL;
}
int main(){
	pthread_t tid[NUM];
	//char err_buf[1024];
	int i,ret;
	ret=pthread_rwlock_init(&rwlock,NULL);
	if(ret)
	{
	perror("lock inti failed!!\n");
	exit(1);
	}
	pthread_rwlock_wrlock(&rwlock);
	for(i=0;i<NUM;i++)
	{
	ret=pthread_create(&tid[i],NULL,fun,NULL);
	
	if(ret!=0)
	{
	perror("thread create  failed !!!\n");
	exit(2);

	}
	}
	pthread_rwlock_unlock(&rwlock);
	for(i=0;i<NUM;i++)
	{
	//printf("g1=        :%d\n",g);
	pthread_join(tid[i],NULL);
	//printf("g2=        :%d\n",g);
	
	}
	pthread_rwlock_destroy(&rwlock);
	printf("thread num       	:%d\n",NUM);
	printf("loops  per thread   :%d\n",LOOP);
	printf("execpt result       :%d\n",NUM*LOOP);
	printf("actual  result      :%d\n",g);
	//printf("thread num       :%d\n,NUM");
	return 0;
	



}
