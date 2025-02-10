
/*wap x3=(x3+x1), x2 times.
 for(i=1;i<=x2;i++)
 {    x3=x3+x1;}
ex:- x1 =2,x2=5,x3=0;
x3=0+2=2;
x3=2+2=4;
x3=4+2=6;
x3=6+2=8;
x3=8+2=10;*/

_start:
    addi x1,x0,2
    addi x2,x0,5
    addi x3,x0,0

repeat_additon:
    add x3,x3,x1
    addi x2,x2,-1;
    bne x2,x0,repeat_additon
j .