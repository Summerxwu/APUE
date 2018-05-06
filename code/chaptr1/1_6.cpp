#include "apue.h"
#include "error.c"

int main(void){
    pid_t pid = getpid();
    pid_t ppid = getppid();
    printf("this is the pid %ld\n",(long)pid);
    printf("this is the ppid %ld\n",(long)ppid);
    exit(0); 
    exit(0);
}
