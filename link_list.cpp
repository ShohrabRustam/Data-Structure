#include<iostream>
#include <stdio.h>
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
 first=new Node;
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
 cout<<p->data<<endl;
 p=p->next;

 }
 
}


 
 
int main()
{
int n;
struct Node *temp;
cout<<"enter the size of the list"<<endl;
cin >>n;
int A[n];
cout<<"enter the elements in to the list "<<endl;
for (int i=0;i<n;i++)
cin >>A[i];

create(A,8);
cout<<"the elements of the list is :"<<endl;

Display(first);

 return 0;
 
}
