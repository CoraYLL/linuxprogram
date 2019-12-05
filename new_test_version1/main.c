#include "uhead.h"
 int main(){
	int data[UNMU];
	int j;
	srand((int)time(0));

	for(j=0;j<UNMU;j++){

	data[j]=urand();}
	show(data,UNMU);
	
	
return  0;

}
