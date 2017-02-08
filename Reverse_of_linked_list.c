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

 void reverse()
 {
     struct node *prev,*current,*next;
     prev=NULL;
     current=head;
     while(current!=NULL)
     {
         next=current->next;
         current->next=prev;
         prev=current;
         current=next;
     }
     head=prev;
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
    int count;
printf("----------------------MENU---------------------------------\n");
printf("1. CREATE\n");
printf("2.Reverse of the linked list\n");
printf("Enter your choice\n");
scanf("%c",&ch);
switch(ch)
{
    /*creating a linked list*/
    case '1':
    create();
    print();
    break;
   
     case '2':
  create();
  reverse();
  print();
  break;
    default:
    printf("wrong choice entered");
    break;
}

	return 0;
}
