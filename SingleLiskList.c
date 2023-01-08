#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
 
struct Node
 
{
 
int data;
 
struct Node *next;
 
};
 
struct Node *head=NULL;
struct Node *tail=NULL;
 
struct Node *createNode( int data) {
struct Node *newNode;
 
newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->next = NULL;
newNode->data=data;
 
return newNode;
}
 
int getData(){
int data;
printf(" Enter Data");
scanf("%d", &data);
 return data;
}
 
void insert_at_end(){
 
int data; 
 
data = getData();
 
struct node *newNode =createNode(data);
 
if ( head == NULL ){
head = newNode;
tail = newNode;
}else{
  tail->next = newNode;
tail = newNode;
 
}
 
 
}//end of insert_at_end
 
 void display (){
 
struct Node *temp;
 
 temp = head; 
 
while (temp != NULL){
printf("[%d|-]->", temp->data);
temp = temp -> next;
}
 
 
}
 
void insert_after (){
    int num, data;
    struct Node *temp, *newNode;
    
    printf ("Enter data after which you want to insert");
    scanf ("%d",&num); //7
    data = getData();
    
    temp = head;
    
    while (temp->data != num && temp != NULL) {
        temp = temp -> next;
    }
    
    if (temp == NULL){
        printf(" Invalid input ");
    }else{
        newNode = createNode(data);
        newNode -> next = temp -> next;
        temp -> next = newNode;
        
    }
    
    
}//end of insert_after
 
 
 
void createMenu(){
    
    int choice=1;
    
    while (choice !=0){
        printf("Enter you choice\n");
        printf("Enter 1 for insert at end \n");
        printf("Enter 2 for display \n");
        printf("Enter 3 for insert after ");
        
        scanf("%d",&choice);
 
        switch(choice){
            
            case 1 : insert_at_end(); break;
            case 2 : display(); break;
            case 3 : insert_after (); break;
            default : exit(0);
        }        
    }
}
 
int main()
{
    createMenu();
}
