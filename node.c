#include<stdio.h>
#include<stdlib.h>
struct node
{
  char symbol;
  int data;
  struct node *p;
};
int main()
{
struct node *head=(struct node*)malloc(sizeof(struct node*));
head->symbol='A';
head->data=1;
head->p=NULL;
printf("NODE 1 :%c %d %d",head->symbol,head->data, head->p);
struct node *tail=(struct node*)malloc(sizeof(struct node*));
tail->symbol='B';
tail->data=2;
tail->p=NULL;
head->p=tail;
printf("->  %c %d %d",head->p->symbol,head->p->data,tail->p);
struct node *last=(struct node*)malloc(sizeof(struct node*));
last->symbol='C';
last->data=3;
last->p=NULL;
tail->p=last;
printf("--> %c %d %d",tail->p->symbol,tail->p->data,last->p);
printf("\n (%c %d)--> (%c %d)--> (%c %d)",head->symbol,head->data,head->p->symbol,head->p->data,tail->p->symbol,tail->p->data); 
}
