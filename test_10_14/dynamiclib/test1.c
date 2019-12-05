#include "my.h"
#include <stdio.h>
int main()
{
	int a[5]={13,4669,-665,47,12};
	show(a,5);
	printf("max=%d\n",max(a,5));
	printf("sum=%d\n",sum(a,5));
	return 0;
	


}
