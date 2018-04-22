#include "apue.h"
#include "error.c"
#include <stdio.h>

#define BUFFSIZE 4

int main(void){

    int n;
    char buffer[BUFFSIZE];

    while((n = read(0,buffer,BUFFSIZE))>0){
        if(write(1,buffer,n) != n){
            printf("write error\n");            
        }
    }    
    exit(0);
}
