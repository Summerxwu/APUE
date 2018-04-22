#include "apue.h"
#include "error.c"

int n = 0;
int main(void)
{
    while((n = getc(stdin)) != EOF){
        if(putc(n,stdout) == EOF){ 
            printf("putc error\n"); 
        }
    }
    exit(0);
}

