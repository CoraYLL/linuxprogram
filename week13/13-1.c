#include "my.h"
void sigtoutine(int dunno)
{
	switch(dunno){
		case 1:
			printf("get  a signal sighup\n");
				break;
		case 2:
			printf("get  a signal sigint\n");
				break;
		case 3:
			printf("get  a signal sigquit\n");
				break;
	

	}


}
int main(){
	printf("process id is %d\n",getpid());
	signal(SIGHUP,sigtoutine);
	signal(SIGINT,sigtoutine);
	signal(SIGQUIT,sigtoutine);
	while(1);

}
