#include <stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *next;
}*head=NULL;

int main(void) {
int n;
int i,j;
printf("Enter the number of node you want to enter");
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

   struct node* temp1;
    temp1=head;
    while(temp1!=NULL)
    {
        printf("%d",temp1->data);
        temp1=temp1->next;
    }

	return 0;
}

