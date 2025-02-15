//function pointer is also a type of callback function. 
//function pointer point to memory location and content is assumed to be the code or instruction. 

#include<stdio.h>
void function_1(int a)
{
    printf("function_1() = %d\n",a);   
}

void function_2(int b)
{
    printf("function_2()= %d\n", b);
    
}

typedef void (*func_ptr)(int arg);
int main()
{
    //void (*func_ptr)(int arg); //function pointer declaration. returntype and argument. 
                               //return_dataType(*fun_ptr_Name)(input argument)

   // typedef void (*func_ptr)(int arg); //typedef can define outside also. 
    func_ptr pf;             // name of func_ptr changed to pf,define the variable of function pointer type. 

    //func_ptr =function_1; //parenthesis not required here just like *p =&a;
    //func_ptr(10);        //*(derefrencing operator not required), as if we just calling a function

    pf = function_1;
    pf(10);
    


    pf = function_2;     //parenthesis not required here just like *p =&a;
    pf(50);              //*(derefrencing operator not required),as if we just calling a function.

    return 0;
}
