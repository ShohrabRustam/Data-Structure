#include<iostream>
#include<stdlib.h>
using namespace std;
struct  Node
{
    int info ;//data of link list 
    struct Node *next; //self referencial pointer 
}*first=NULL;



void create(int A[],int n)
{
 int i;
 struct Node *t,*last;
 first=new Node;
 first->info=A[0];
 first->next=NULL;
 last=first;

 for(i=1;i<n;i++)
 {
 t=new Node;
 t->info=A[i];
 t->next=NULL;
 last->next=t;
 last=t;
 }
}

void display(struct Node *p)
{

 while(p!=NULL)
 {
  cout<<"the node is : "<<p->info<<endl;
  p=p->next;

 }
 cout<<"the node is : "<<p->info<<endl;
}
 
 void deleteFirstNode(struct Node *p)
{
        first=first->next;
        delete p;
    
}

int main ()
{
    int n;
    cout<<"enter the size of the link list "<<endl;
    cin >>n;
    int array[n];
    cout<<"please enter the elements into the link list "<<endl;
    for (int i=0;i<n;i++)
    cin >>array[i];
    create(array,n);
   
	cout<<"the elements in list after delete first  : "<<endl;
	deleteFirstNode(first);
    display(first);
}
