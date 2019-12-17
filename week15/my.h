#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <wait.h>
#include <signal.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/times.h>
#include <time.h>
#include <pthread.h>
#include <limits.h>
#include <semaphore.h>
#define LOOP 10000000
#define NUM 4 
#define NT 100

