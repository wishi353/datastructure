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
    int m,o;
    printf("Enter index");
    scanf("%d",&m);
    printf("Enter element");
    scanf("%d",&o);
    for(i=n;i>m;i--)
    {
        arr[i+1]=arr[i];
        
    }
    arr[m]=o;
    n++;
    printf("Print values in array");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    

    return 0;
}
