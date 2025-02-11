//‘sizeof’ on array function parameter ‘array’ will return size of ‘int *
#include<stdio.h>
int add(int array[10])
{
    printf("size of array =%ld\n",sizeof(array));
    int sum=0;
    for(int i=0;i<sizeof(array)/sizeof(int);i++)
    {
        sum=sum+array[i];
    }
    return sum;

}
int main()
{
    int a[10]= {1,1,1,1,1,1,1,1,1,1};
    printf("size of array_a =%ld\n",sizeof(a));
    printf("sum: %d\n", add(a));

    return 0;

}
