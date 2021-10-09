#include<iostream>
#include <stdlib.h>
using namespace std;
struct Node
{
 int data;
 struct Node *next;
}*first=NULL;
void create(int A[],int n)
{
 int i;
 struct Node *t,*last;
 first=(struct Node *)malloc(sizeof(struct Node));
 first->data=A[0];
 first->next=NULL;
 last=first;

 for(i=1;i<n;i++)
 {
 t=new Node;
 t->data=A[i];
 t->next=NULL;
 last->next=t;
 last=t;
 }
}
void Display(struct Node *p)
{
 while(p!=NULL)
 {
 cout<<p->data;
 p=p->next;
 }
}
void RDisplay(struct Node *p)
{
 if(p!=NULL)
 {
 RDisplay(p->next);
 cout<<p->data;

 }
}
int sorted(struct Node *p)
{
    int x=-121909;
    while (p!=NULL)
    {
        if (p->data<x){ 
        return false;
        }
        x=p->data;
        p=p->next;
    }
    return true;
    
}
int main()
{

 int A[]={10,20,30,40,50};
 create(A,5);
	
    cout<<sorted(first);

 return 0;
}