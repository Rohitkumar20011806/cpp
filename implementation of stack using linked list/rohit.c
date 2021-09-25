#include<stdio.h>
#include<stdlib.h>
struct node {
   int data;
   struct node *link;
   };
struct node *top=NULL;
void push(int);
void pop();
void display();
void main () 
{
int choice ;
int n;
while(1)
{
printf("1.insert the data\n");
printf("2.delete the data \n");
printf("3.display the data\n");
printf("Enter the choice\n");
scanf("%d",&choice);
switch(choice)
{
   case 1:
   printf("enter the number\n");
   scanf("%d",&n);
   push(n);
   break;
   
   case 2:
   pop();
   break;
   
   case 3:
   display();
   break;
   
    
    case 4:
    exit(1);
    break;
    
    default:
    printf("wrong choice\n");
   }
   }
   }
   void push(int x)
   {
     struct node *newnode;
     newnode=(struct node*)malloc(sizeof(struct node));
     newnode->data=x;
     newnode->link=top;
     top=newnode;
     
   
    }
     
     void pop()
     {
     struct node *temp;
     temp=top;
     if(top==NULL){
     printf("underflow");
     }
     else{
      top=top->link;
     printf("the deleted element is %d",temp->data);
     free(temp);
     }
     }
     void display()
     {
     struct node *temp;
     temp=top;
     if(top==NULL){
     printf("empty \n");
     }
     else{
     while(temp!=NULL)
     {
     printf("displayed number is %d",temp->data);
     temp=temp->link;
     }
     }
     }

     
     
     
     
     
     
     
     
     
     
     
     
 
   
   
    
    
    
    
    
    
   
