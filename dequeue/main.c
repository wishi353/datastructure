/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h> 
//#include <conio.h>
#include <stdlib.h>
#define size 5
int main()
{
int arr[size],R=-1,F=0,te=0,ch,n,i,x;
for(;;)
{
//system("cls");
printf("F=%d R=%d\n\n",F,R);
printf("1. Add Rear\n");
printf("2. Delete Rear\n");
printf("3. Add Front\n");
printf("4. Delete Front\n");
printf("5. Display\n");
printf("6. Exit\n");
printf("Enter Choice: ");
scanf("%d",&ch);

switch(ch)
{
case 1:
if(te==size)
{
printf("Queue is full");
//getch();
}
else
{
printf("Eneter a number ");
scanf("%d",&n);
R=(R+1)%size;
arr[R]=n;
te = te+1;
}
break;
case 2:
if(te==0)
{
printf("Queue is empty");
//getch();
}
else
{
if(R==-1)
{
R=size-1;
}
printf("Number Deleted From Rear End = %d",arr[R]);
R=R-1;
te=te-1;
//getch();
}
break;
case 3:
if(te==size)
{
printf("Queue is full");
//getch();
}
else
{
printf("Enter a number ");
scanf("%d",&n);
if(F==0)
{
F=size-1;
}
else
{
F=F-1;
}
arr[F]=n;
te=te+1;
}
break;
case 4:
if(te==0)
{
printf("Queue is empty");
//getch();
}
else
{
printf("Number Deleted From Front End = %d",arr[F]);
F=(F+1)%size;
te=te-1;
//getch();
}
break;
case 5:
if(te==0)
{
printf("Queue is empty");
//getch();
}
else
{
x=F;
for(i=1;i<=te;i++)
{
printf("%d ",arr[x]);
x=(x+1)%size;
}
//getch();
}
break;
case 6:
exit(0);
break;
default:
printf("Wrong Choice");
//getch();
}
}
return 0;
}
