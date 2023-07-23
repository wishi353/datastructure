/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
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
    printf("Enter element");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            printf("The element is found at index:%d",i);
            break;
        }
        
    }
    

    return 0;
}
