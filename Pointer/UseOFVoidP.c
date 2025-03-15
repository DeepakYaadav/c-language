#include<stdio.h>
#include<stdlib.h>
#define REQUEST 1*1024*1024*1024

int main()
{
    for(int i=0;i<100000;i++)
    {
        int *p= (int*)malloc(REQUEST); // 
        printf("i:%d: %p\n",i,p);   //malloac allocation
        if(p==NULL)
        return 1;
    }
    
    // printf("before: %d\n",*p);   //garbage value
    // *p =4;
    // printf("after: %d\n",*p);
    // free(p);
    // return 0;
}