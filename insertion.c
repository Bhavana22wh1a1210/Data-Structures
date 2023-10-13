#include<stdio.h>
#include<stdlib.h>
struct s_l_l_insertion
{
  char symbol;
  int data;
  struct s_l_l_insertion *p;
 };
void traverse(struct s_l_l_insertion *head);
void insertion(struct s_l_l_insertion *head,char symbol,int data);

void main()
{
  struct s_l_l_insertion *head=(struct s_l_l_insertion*)malloc(sizeof(struct s_l_l_insertion));
  head->symbol='A';
  head->data=100;
  head->p=NULL;

  struct s_l_l_insertion *current=(struct s_l_l_insertion*)malloc(sizeof(struct s_l_l_insertion));
  current->symbol='B';
  current->data=200;
  current->p=NULL;
  head->p=current;

  current=(struct s_l_l_insertion*)malloc(sizeof(struct s_l_l_insertion));
  current->symbol='C';
  current->data=300;
  current->p=NULL;
  head->p->p=current;

  insertion(head,'D',400);
  traverse(head);
 }

void traverse(struct s_l_l_insertion *head)
{
 if(head==NULL)
   printf("s_l_l is empty");
 struct s_l_l_insertion *temp=NULL;
 temp=head;
 while(temp!=NULL)
 {
  printf("(%c %d)->",temp->symbol,temp->data);
  temp=temp->p;
 }
 printf("NULL");
}

void insertion(struct s_l_l_insertion *head,char symbol,int data)
{
 struct s_l_l_insertion *temp=NULL;
 temp=head;
 struct s_l_l_insertion *new_node=(struct s_l_l_insertion*)malloc(sizeof(struct s_l_l_insertion));
 new_node->symbol=symbol;
 new_node->data=data;
 new_node->p=NULL;

 // printf("INSERTED SUCCESSFULLY");
 while(temp->p!=NULL)
    temp=temp->p;
 temp->p=new_node;
} 





