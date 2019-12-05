#include "my.h"
int main()
{
   //char *vect[]={"./test2","123","hello","World",NULL};
   printf("caller2 pid = %d ,ppid = %d\n",getpid(),getppid());
   execlp("hello","./hello",NULL);
   //execl("/home/rlk/week7/test1","./test1","123","hello","World",NULL);
   printf("execl after calling!\n");
   return 0;

}
