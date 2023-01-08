/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
 
struct Node
 
{
 
int data;
 
struct Node *next, *prev;
 
};
 
struct Node *head=NULL;

 
struct Node *createNode( int data) {
struct Node *newNode;
	newNode = (struct Node*)malloc(sizeof(struct Node));
	  newNode->next = NULL;
	   newNode->prev = NULL;
	  newNode->data=data;
  return newNode;
}
 
int getData(){
int data;
  printf(" Enter Data for double Link List ");
   scanf("%d", &data);
 return data;
}
 
void insert_at_end(){
 
int data; 
struct Node *temp;
 
data = getData(); 
struct Node *newNode = createNode(data);
 
	if ( head == NULL ){
		head = newNode;
		
	}else{
		temp = head;
		while ( temp ->next != NULL )
			temp = temp -> next;
		
	  temp->next = newNode;
	  newNode -> prev = temp;
	  
	
 
}
 
 
}//end of insert_at_end
 
 void display (){
 
struct Node *temp;
 temp = head; 
 
while (temp != NULL){
	printf("[%d|-]->", temp->data);
temp = temp-> next;
}
 
 
}

 void displayReverse (){
 
struct Node *temp;
 temp = head; 
 
	while (temp -> next != NULL)
		temp = temp -> next;
	
	while( temp != NULL )
	{
		printf("[%d| ]->", temp->data);
		temp = temp-> prev;
	}


 
 
}

 
 
void createMenu(){
    
    int choice=1;
    
    while (choice !=0){
        printf("Enter you choice\n");
        printf("Enter 1 for insert at end \n");
        printf("Enter 2 for display \n");
        printf("Enter 3 for display Reverse \n");
		
        scanf("%d",&choice);
 
        switch(choice){
            
            case 1 : insert_at_end(); break;
            case 2 : display(); break;
            case 3 : displayReverse (); break;
            default : exit(0);
        }        
    }
}
 
int main()
{
    createMenu();
}
