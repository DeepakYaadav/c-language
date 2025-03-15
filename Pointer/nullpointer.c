#include<stdio.h>
//#define NULL (void*)0x0 // defined like this in stddef.h
int main()
{
    int *p=NULL;
    printf("%p, 0x%llu\n",NULL, (long long unsigned int)NULL);
    printf("Data at NULL: %d\n", *p);
    return 0;
}