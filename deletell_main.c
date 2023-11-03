#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *p;
};

struct node* deletelist(struct node *head);
void displaylist(struct node *head);

int main()
{
 struct node *head=(struct node*)malloc(sizeof(struct node));
 head->data=10;
 head->p=NULL;

 struct node *current=(struct node*)malloc(sizeof(struct node));
 current->data=20;
 current->p=NULL;
 head->p=current;

 current=(struct node*)malloc(sizeof(struct node));
 current->data=30;
 head->p->p=current;

 current=(struct node*)malloc(sizeof(struct node));
 current->data=40;
 head->p->p->p=current;

 printf("Initial linked list nodes are\n");
 displaylist(head);
 printf("\nAfter deleting entire linked list\n");
 head=deletelist(head);
 displaylist(head);
}

struct node* deletelist(struct node *head)
{
  struct node *temp=NULL;
   //temp=head;
   while(temp!=NULL)
   {
   head=temp->p;
   free(temp);
   temp=head;
   }
   head=NULL;
  return head;
  //printf("All the nodes are deleted");
}

void displaylist(struct node *head)
{
 struct node *temp=head;
 if(temp==NULL)
   printf("linked list is empty");
  while(temp!=NULL)
  {
  printf("%d->",temp->data);
  temp=temp->p;
  }
  printf("NULL");
}
