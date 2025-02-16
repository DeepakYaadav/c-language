#include<stdio.h>
int  a=10;                                //global Variable acess till complete execution of programme.stored in data segment. 
void foo()
{ 
    int a=20;                              //acess inside foo only, will be declared inside foo stack. 
    a++;
    printf("Value of a inside foo: %d\n",a);

}

void bar()
{
    printf("Value of a inside bar: %d\n",a); //will acess global variable,does not have not stack variable. 
}
int main()
{
    printf("Value of a inside main: %d\n",a);
    //int a;                                   //local variable acess inside main ,this will be declared inside main stack. 
    extern int a;                              //Ask compiler to replace use it as global, replace older global. no new copy of variable in main stack.
    
    a=30; 
    foo();
    bar();
    printf("Value of a inside main: %d\n",a);
    return 0;

}