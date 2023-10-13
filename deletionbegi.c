#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *p;
};

struct node* deletebegi(struct node *head);
void traverse(struct node *head);

int main()
{
 struct node *head=(struct node *)malloc(sizeof(struct node));
 head->data=10;
 head->p=NULL;

 struct node *current=(struct node *)malloc(sizeof(struct node));
 current->data=20;
 current->p=NULL;
 head->p=current;

 current=(struct node*)malloc(sizeof(struct node));
 current->data=30;
 current->p=NULL;
 head->p->p=current;

 current=(struct node*)malloc(sizeof(struct node));
 current->data=40;
 current->p=NULL;
 head->p->p->p=current;

 printf("linked list before deletion\n");
 traverse(head);
 printf("\nlinked list after the deletion\n");
 head=deletebegi(head);
 traverse(head);
}

struct node* deletebegi(struct node *head)
{
 struct node *temp=head;
 if(head==NULL)
   printf("linked list is empty");
 else
 {
  head=temp->p;
  free(temp);
  temp=NULL;
 }
 return head;
}

void traverse(struct node *head)
{
 struct node *temp=NULL;
 temp=head;
 while(temp!=NULL)
 {
  printf(" %d-->",temp->data);
  temp=temp->p;
 }
 printf("NULL\n");
}

 
