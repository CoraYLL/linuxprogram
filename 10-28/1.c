#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[],char *env[])
{
	//diyige
	int i;
	for(i=0;env[i];i++)
	{
	printf("%s\n",env[i]);
	}
	//dierge
	extern char **environ;
	int ii;
	for(ii=0;environ[ii];ii++)
	{
	printf("%s\n",environ[ii]);
	}
	//disange
	printf("%s\n",getenv("PATH"));
	return 0;

}
