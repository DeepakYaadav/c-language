#include<stdio.h>
int main()
{
    int a = 1; // default a would be signed int, takes 32bit space in memory.
    unsigned int b =1;
    
    printf("a<<31(hex): %x\n", a<<31);  //8
    printf("a<<31(dec): %d\n", a<<31);  // -2^31 == 2147483648 Because a is signed int.

    printf("b<<31(hex): %x\n", b<<31);  
    printf("b<<31(dec): %d\n", b<<31);


    printf("(b<<31)>>4(hex): %x\n", (b<<31)>>4); Logical right shift
    printf("(a<<31)>>4(hex): %x\n", (a<<31)>>4);  //special behaviour of signed int. 
    //Because MSB is 1 it is getting replicated at all the places. 
    //it propogate the sign bit i.e 1, also called as airthmatic right shift
    

    printf("(a<<31)>>4(dec): %d\n", (a<<31)>>4);
    printf("(a<<7)dec): %d\n", (a<<7));
    return 0;
}