/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int n=10;
int top=-1;
int arr[10];

int isEmpty()
{
    if(top==-1)
    return 1;
    else
    return 0;
}
int isFull()
{
    if(top==n-1)
    return 1;
    else
    return 0;
}
int push()
{
    int m;
    printf("Enter an element");
    scanf("%d",&m);
    if(top==n-1)
    {
        printf("Stack is Overflow\n");
    }
    else
    {
    top=top+1;
    arr[top]=m;
    }
}
int pop()
{
    int val;
    if(top==-1)
    {
        printf("Stack is Underflow\n");
    }
    else
    {
    //int val;
    top=top-1;
    val=arr[top];
    top--;
    }
    return val;
}
void display()
{
    int i;
    for(i=top;i>0;i--)
    {
        printf("%d\n",arr[i]);
    }
}
int main()
{
    int j=1;
    while(j!=0)
    {
    printf("Choose any one option\n1. Enter data\n2. Remove element\n3. Display the elements\n4. Stack is filled\n5. Stacke is empty\n");
    scanf("%d",&j);
    switch(j)
    {
        case 1:
        push();
        break;
        case 2:
        pop();
        break;
        case 3:
        display();
        break;
        case 4:
        isFull();
        break;
        case 5:
        isEmpty();
        break;
        default:
        exit(0);
        break;
    }
}
    return 0;
}
