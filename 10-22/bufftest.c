#include <stdio.h>
#include <stdlib.h>
#define SIZE 512
int main(int argc,char *argv[]){
	char buf[SIZE];
	if(setvbuf(stdin,buf,_IONBF,SIZE)!=0)
	{
		perror("jiang biaozhun STDIN shuru shezhi wei wu huanchong shibai \n");
		return 1;
	}
		printf("jiang biaozhun STDIN shuru shezhi wei wu huanchong chenggong\n" );
		printf("stdin de leingxing  wei ");
	if(stdin -> _flags & _IO_UNBUFFERED)
	{
		printf("wu  huanchong");
	}
	else if(stdin-> _flags & _IO_LINE_BUF)
	{
		printf("hang  huanchong");
	}
	else
	{
		printf("QUAN  huanchong");
	}
	printf("huanchongquq daxiao wei %ld\n",stdin->_IO_buf_end - stdin ->_IO_buf_base);

	printf("we jianmaioshu fu %d\n",fileno(stdin));
	
	if(setvbuf(stdin,buf,_IOFBF,SIZE)!=0)
	{
		printf("jiang biaozhun STDIN shuru shezhi wei wu huanchong shibai");
		return 2;
	}
	printf("xiugai biaoshun shuchu chenggon \n ");
	printf("stdin de leingxing  wei ");
	if(stdin-> _flags & _IO_UNBUFFERED)
	{
		printf("wu  huanchong");
	}
	else if(stdin-> _flags & _IO_LINE_BUF)
	{
		printf("hang  huanchong");
	}
	else
	{
		printf("QUAN  huanchong");
	}
	printf("huanchongquq daxiao wei %ld\n",stdin->_IO_buf_end - stdin ->_IO_buf_base);

	printf("we jianmaioshu fu %d\n",fileno(stdin));
	return 0;
	
}

