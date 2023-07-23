/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define max_size 101
int A[max_size];
int top = -1;

void push(int x)
{
    if(top==max_size-1)
    {
        printf("Stack is overflow");
        return;
    }
    A[++top]=x;
}

void pop()
{
    if (top==-1)
    {
        printf("Stack is empty");
        return;
    }
    top--;
}

int Top()
{
    return A[top];
}

int IsEmpty()
{
    if(top==-1) return 1;
    return 0;
}

void print()
{
    int i;
    printf("Stack: ");
    for(i=0;i<=top;i++)
    printf("%d",A[i]);
    printf("\n");
    return;
}

int main()
{
    push(50);print();
    push(55);print();
    push(60);print();
    pop();print();
    pop();print();
    pop();print();
    return 1;
}


