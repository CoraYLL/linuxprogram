#include "uhead.h"
void urand(int *a,int n){

int j;

	srand((int)time(0));
	//j=1+(int)(100.0*rand()/(RAND_MAX+1.0));
	//return j;
	for(j=0;j<n;j++)
	a[j]=1+(int)(100.0*rand()/(RAND_MAX+1.0));

}


int usum(int *a, int n){
 int i=0;
 int sum=0;
  for(i=0;i<n;i++){
   sum=sum+a[i];
	}
return sum;
}



void show(int *a,int n){
int i;
	for(i=0;i<n;i++){
	printf("a[%d]=%d\n",i,a[i]);
}

}
