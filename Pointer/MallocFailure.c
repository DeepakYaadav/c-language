
#include<stdio.h>
#include<stdlib.h>
#define REQUEST 1*1024*1024*1024

int main()
{
for (int i=0; i<10; i++)
{
    int *p = (int*)malloc(REQUEST);
    // Force the OS to allocate real memory by writing to it
    for (int j=0; j<REQUEST/sizeof(int); j++)
    {
        p[j] = 0;  // Writing forces actual memory allocation
    }
   if (p == NULL)
    {
        printf("Memory allocation failed at iteration %d\n", i);
        return 1;
    }
    printf("i: %d: %p\n", i, p);
  
}
}
