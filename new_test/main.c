#include "uhead.h"
 int main(){
	int data[UNMU];
	int j;
	//srand((int)time(0));

	//for(j=0;j<UNMU;j++){

	//data[j]=urand();
	//}
	urand(data,UNMU);
	show(data,UNMU);

	printf("sum of above=%d\n",usum(data,UNMU));
	
	
return  0;

}
