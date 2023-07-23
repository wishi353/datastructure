/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter values in array");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Print values of array");
    for(i=1;i<=n;i++)
    {
        printf("%d\n",arr[i]);
    }
    int m;
    int first=1, last=n;
    int middle=(first+last)/2;
    printf("Enter element");
    scanf("%d",&m);
    while(first<=last)
    {
        if(arr[middle]>m)
        {
            last = middle-1;
            middle=(first+last)/2;
        }
        else if(arr[middle]<m)
        {
            first = middle+1;
            middle=(first+last)/2;
        }
        else
        {
            printf("The element is found at index:%d",middle);
            break;
        }
    }
        
    if(first>last)
    {
       printf("Element not found"); 
    }
    

    return 0;
}
