#include<stdio.h>                       //take standard libray
#include "math_library.h"               //take libray from current directory

static void add(int x,int y)
{
    printf("add: %d\n",x+y);
}

static void sub(int x,int y)
{
    printf("sub: %d\n",x-y);
}

static void mul(int x,int y)
{
    printf("mul: %d\n",x*y);
}

static void div(int x,int y)
{
    printf("add: %d\n",x/y);
}

typedef void(*func_t)(int a,int b);                       //typecasting of function pointer(func_t)

func_t fun_lib[4]  = {add ,sub, mul, div};                 // function pointer array fun_lib 

void execute_operation(int operation,int a,int b)
{
    fun_lib[operation](a,b);
}

