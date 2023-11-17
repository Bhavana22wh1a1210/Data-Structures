
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};
struct node *insert_begin(struct node *head, int data)
{
struct node *new=(struct node*)malloc(sizeof(struct node));
new->data=data;
new->link=NULL;

new->link=head->link;
head->link=new;

return new;
}
struct node *insert_end(struct node *head, int data)
{
struct node *new=(struct node*)malloc(sizeof(struct node));
new->data=data;
new->link=NULL;

new->link=head->link;
head=head->link;

return head;
}


void traverse(struct node *head)
{
struct node *temp=head;
do
{
printf("%d->",temp->data);
temp=temp->link;
}
while(temp!=head->link);
printf("%d  1st node=%d",temp->data,temp->data);
}


void main()
{
struct node *head=(struct node*)malloc(sizeof(struct node));
head->data=10;
head->link=head;
printf("cll:");
traverse(head);

head=insert_begin(head,20);
printf("\n After insert at begin:");
traverse(head);

head=insert_end(head,30);
printf("\n After insert at the end:");
traverse(head);

}
