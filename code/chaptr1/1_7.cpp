#include "apue.h"
#include "sys/wait.h"

int main(void){

    char buf[MAXLINE]; 
    pid_t pid;
    int status;

    //read instructor from command line
    printf("%% ");
    while(fgets(buf,MAXLINE,stdin) != NULL){
        if(buf[strlen(buf)-1] == '\n'){
            buf[strlen(buf) - 1] = 0;
        }

        //execute command
        if((pid = fork()) < 0){
            printf("fork error\n");
        }

        if(pid == 0){
            execlp(buf,buf,(char *)0);
            //如果执行到这里说明exec执行失败了。
            printf("execlp error\n");
            exit(127);//带出一个127的返回码。
        }
        else{
            //父进程代码
            if(pid = waitpid(pid,&status,0) < 0){
                printf("waitpid error\n");
            }

        } 
        printf("%% ");
    }
    printf("\n");
    exit(0);
}
