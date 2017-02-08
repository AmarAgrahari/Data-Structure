#include <stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *next;
}*head=NULL;

void create()
{
int n;
int i;
printf("Enter the number of node you want to enter \n");
scanf("%d",&n);
struct node *current;
struct node *temp;
for(i=0;i<n;i++)
{
     temp=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    temp->next=NULL;
    
    if(head!=NULL)
    {
    current->next=temp;
     current=temp;
    }
    else
    {
        head=temp;
        current=temp;
    }
    
}
}
 
 void deleteAtBeg()
 {
     struct node *temp;
    temp=head;
     head=head->next;
     free(temp);
     
 }
 
 void deleteAtEnd()
 {
     struct node *current,*temp;
     current=head;
     while(current->next->next!=NULL)
     {
         current=current->next;
     }
     temp=current->next;
     current->next=NULL;
     free(temp);
 }
void print()
{
    struct node* temp1;
    temp1=head;
    while(temp1!=NULL)
    {
        printf("%d->",temp1->data);
        temp1=temp1->next;
    }
printf("NULL");
}

int main(void) {
    char ch;
    int n,n1;
    int pos,n2;
printf("----------------------MENU---------------------------------\n");
printf("1. CREATE\n");
printf("2.DELETE AT THE BEGINNING\n");
printf("3.DELETE AT THE END\n");
printf("4.DELETE AT THE GIVEN POSITION\n");
printf("Enter your choice\n");
scanf("%c",&ch);
switch(ch)
{
    /*creating a linked list*/
    case '1':
    create();
    print();
    break;
   
   /*deleting first node*/
   case '2':
   create();
   deleteAtBeg();
   print();
   break;
   
   /*deleting node at the last*/
   case '3':
   create();
   deleteAtEnd();
   print();
   break;
    

    default:
    printf("wrong choice entered");
    break;
}

	return 0;
}
