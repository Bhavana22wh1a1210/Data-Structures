#include<stdio.h>
struct self
{
  int a;
  char c;
  struct self *p;
};
int main()
{
 struct self m;
 m.a=10;
 m.c='A';
 m.p=NULL;
 struct self n;
 n.a=11;
 n.c='B';
 n.p=NULL;
 m.p=&n;
 printf("BLOCK 1 : %d %c",m.a,m.c);
 printf("\n BLOCK 2 : %d %c",m.p->a,m.p->c);
 struct self o;
 o.a=12;
 o.c='C';
 o.p=NULL;
 n.p=&o;
 printf("\n BLOCK 3:%d %c",n.p->a,n.p->c);
 printf("\n %d",NULL);
}
 
