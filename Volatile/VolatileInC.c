//it ask compiler not to optimise the variable.
//When a variable is declared as volatile, the compiler is forced to always read/write the variable in memory,
//even if it appears redundant.
//Variable will not be cached in CPU register.Alwasy read/write from memory 
//Fethched modified and sent out of the CPU.May/ go and live in cached Mmemory not in CPU.

//
//#include<stdio.h>

void main()
{
    //int victim =3;
    volatile int var =3;
for(int i=0;i<10;i++)
{
    //victim ++;
    var++;
}
   // printf("Value of Victim=%d\n", victim);
   // printf("Value of Victim=%d\n", var);
}