#include<stdio.h>
void main()
{
    const int a= 123; //means here variable a is ready only not a is constant. Modification not allowed. 
    //a=333; //not allowed. 

    int *p =&a;
    *p=333;  // modification of this region is possible. but also dependens on OS, if os mark that region read only, 
            //modification not possible. 
    printf("%d\n",a);
}