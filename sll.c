#include<stdio.h>
#include<stdlib.h>
struct s_l_l
{
  char symbol;
  int data;
  struct s_l_l *p;
};

void traverse(struct s_l_l *head);
int main()
{
  struct s_l_l  *head=(struct s_l_l*)malloc(sizeof(struct s_l_l));
  head->symbol='A';
  head->data=100;
  head->p=NULL;

  struct s_l_l *current=(struct s_l_l*)malloc(sizeof(struct s_l_l));
  current->symbol='B';
  current->data=200;
  current->p=NULL;
  head->p=current;

  current=(struct s_l_l*)malloc(sizeof(struct s_l_l));
  current->symbol='C';
  current->data=300;
  head->p->p=current;
  ///printf("(%c %d) --> (%c %d) --> (%c %d)",head->symbol,head->data,head->p->symbol,head->p->data,head->p->p->symbol,head->p->p->data);
  traverse(head);
}
void traverse(struct s_l_l *head)
{
  if(head==NULL)
	printf("single linked list is empty");
  struct s_l_l *temp=NULL;
  int count=0;
  temp=head;
  while(temp!=NULL)
  {
    printf("(%c %d)-->", temp->symbol,temp->data);
    count++;
    temp=temp->p;
  }
  printf("\n Number of nodes=%d",count);
}



