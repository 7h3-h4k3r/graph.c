#include<stdio.h>

void getErr(const char func , const int line ,const char file ,char *msg , int num){
    if (num){
        printf("Memory allocation Failed %s %d %s",func,line,file);
        exit(-1);
    }
    
}