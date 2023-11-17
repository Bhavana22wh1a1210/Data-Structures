#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node *link;
};
struct node *front=NULL;
struct node *rear=NULL;

int isempty()
{
        return rear==NULL;
}

int enqueue(int data)
{
        struct node *new=(struct node*)malloc(sizeof(struct node));
        new->data=data;
        new->link=NULL;

        if (front==NULL)
        {
                front=rear=new;
        }
        rear->link=new;
        rear=new;
}
int dequeue()
{
        struct node *temp=NULL;
        temp=front;
        int a=front->data;
        if(isempty())
        {
                printf("queue is empty");
        }
        else
        {
                front=temp->link;
                free(temp);
        }
                return a;
}
int front_value()
{
        if(isempty())
        {
                printf("queue is empty");
        }
        else
        {
                return front->data;
        }
}
int display()
{
        struct node *temp=NULL;
        temp=front;
        if(isempty())
        {
                printf("queue is empty");
        }
        while(temp!=NULL)
        {
                printf("%d\n",temp->data);
                temp=temp->link;
        }
}
int main()
{
        enqueue(10);
        enqueue(20);
        enqueue(30);
        enqueue(40);
        printf("Elements in a Queue are:");
        display();
        printf("front=%d\n",front_value());
        printf("Dequeue element is=%d\n",dequeue());
        printf("Dequeue element is=%d\n",dequeue());
        printf("\nElements after dequeue are:\n");
        display();
}
