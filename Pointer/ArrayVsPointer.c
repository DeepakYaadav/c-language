//array can't be reassigned, pointer can be reassigned to other memory location. 
// if array pass an argument, gets decayed as pointer. its size will be size of pointer. 
#include<stdio.h>
void foo(int b[30])
{
    int size= sizeof(b);
    printf("size of array b= %d\n",size);
}
void  main()
{
    int a[3];
    int size= sizeof(a);
    int *b;

    printf("size of array a= %d\n",size);
    foo(b);
}