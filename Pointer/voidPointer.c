
#include <stdio.h>
int main()
{                // pointer data types gives idea how much size need to read.

    int i =10;
    void *pi = &i;
    pritf ("pi: %p, &i: %p\n",pi ,&i);
    pritf("*Pi: %d\n",*pi);             //void pointer can not be derefrence.
   //compiler fails to understand how many bytes to dereference/read
   //use typecasting
    retrun 0;
}