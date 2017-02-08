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
void insertAtBeginning(int n)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=n;
    temp->next=NULL;
    temp->next=head;
    head=temp;
}
void insertAtEnd(int n1)
{
    struct node *current;
    struct node *temp1;
    current=head;
    temp1=(struct node *)malloc(sizeof(struct node));
    temp1->data=n1;
    temp1->next=NULL;
    while(current->next!=NULL)
    {
        current=current->next;
    }
    current->next=temp1;
    current=temp1;
}
void insertAtPos(int n,int pos)
{
    int i;
    struct node *current,*temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=n;
    temp->next=NULL;
    current=head;
    for(i=0;i<pos-2;i++)
    {
        current=current->next;
    }
    temp->next=current->next;
    current->next=temp;
   
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
printf("2.INSERT AT THE BEGINNING\n");
printf("3.INSERT AT THE END\n");
printf("4.INSERT AT THE A GIVEN POSITION\n");
printf("Enter your choice\n");
scanf("%c",&ch);
switch(ch)
{
    case '1':
    create();
    print();
    break;
    case '2':
    
    create();
    printf("Enter data to insert");
    scanf("%d",&n);
    insertAtBeginning(n);
    print();
    break;
    
    case '3':
    create();
    printf("Enter data to insert");
    scanf("%d",&n1);
    insertAtEnd(n1);
    print();
    break;
    
    case '4':

    create();
    printf("Enter data and position \n");
    scanf("%d",&n2);
    scanf("%d",&pos);
    insertAtPos(n2,pos);
    print();
    break;
    
    default:
    printf("wrong choice entered");
    break;
}

	return 0;
}
