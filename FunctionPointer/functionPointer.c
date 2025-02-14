//function pointer is also a type of callback function. 
//function pointer point to memory location and content is assumed to be the code or instruction. 

#include<stdio.h>
void function_1()
{
    printf("function_1()\n");   
}

void function_2()
{
    printf("function_2()\n");
    
}
int main()
{
    void (*func_ptr)(void); //function pointer declaration. returntype and argument. 
    //return_dataType(*fun_ptr_Name)(input argument)

    func_ptr =function_1;
    func_ptr(); //*(derefrencing operator not required), as if we just calling a function

    func_ptr = function_2;
    func_ptr ();//*(derefrencing operator not required),as if we just calling a function.

    return 0;
}
