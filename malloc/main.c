/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int * function(int size)
{
    int *p;
    p=(int *p)malloc(size);
    for(int i=0;i<size;i++)
    p[i]=i+1;
    return *p;
}

int main()
{
    int *p,s=5;
    p=function(s);
    for(int i=0;i<s;i++)
    printf("%d",p[i]);
    return 0;
}

