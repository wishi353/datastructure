/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter values in array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Print values of array");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    int m;
    printf("Enter index");
    scanf("%d",&m);
    for(i=m;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    printf("Print values in array\n");
    for(i=0;i<n-1;i++)
    {
        printf("%d\n",arr[i]);
    }
    

    return 0;
}

