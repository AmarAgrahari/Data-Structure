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
 void deleteAtPos(int pos)
 {
     struct node *temp,*current;
     int i;
     current=head;
     for(i=0;i<pos-2;i++)
     {
         current=current->next;
     }
     temp=current->next;
     current->next=current->next->next;
     free(temp);
 }
 
 int lengthOfLinkedList()
 {
     int count1=0;
     struct node *current;
     current=head;
     while(current!=NULL)
     {
         count1++;
         current=current->next;
     }
     return count1;
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
printf("2.DELETE AT THE GIVEN POSITION\n");
printf("Enter your choice\n");
scanf("%c",&ch);
switch(ch)
{
    /*creating a linked list*/
    case '1':
    create();
    print();
    break;
   
   /*deleting at given position*/
  case '2':
  create();
  printf("Enter the position you want to delete\n");
  scanf("%d",&pos);
  deleteAtPos(pos);
  print();
  break;
    
  case '3':
  create();
 
  printf("length of the linked list = %d",lengthOfLinkedList());
  break;

    default:
    printf("wrong choice entered");
    break;
}

	return 0;
}
