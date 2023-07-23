/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int n=10;
int f=-1,r=-1;
int arr[10];

int isEmpty()
{
    if(f==r)
    return 1;
    else
    return 0;
}
int isFull()
{
    if(r==n-1)
    return 1;
    else
    return 0;
}
int enque()
{
    int m;
    printf("Enter an element");
    scanf("%d",&m);
    if(r==n-1)
    {
        printf("Queue is Overflow\n");
    }
    else
    {
    r=r+1;
    arr[r]=m;
    }
}
int deque()
{
    int val;
    if(f==-1)
    {
        printf("Queue is Underflow\n");
    }
    else
    {
    val=arr[f];
    f=f-1;
    }
    return val;
}
void display()
{
    int i;
    for(i=f+1;i<=r;i++)
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
        enque();
        break;
        case 2:
        deque();
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
