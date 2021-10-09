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
 
 void insert(struct Node *p,int data,int pos)
{
        struct Node *q;
		q=new Node;
		
		q->info=data;
		p=first;
        for(int i=0;i<=pos-1;i++)
        {
            p=p->next;
        }
        q->next=p->next;
        p->next=q;
    
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
    int k;
    cout<<"enter the key into the first node "<<endl;
    cin>>k;
    int pos;
    cout<<"enter position "<<endl;
    cin>>pos;
    if(pos>n)
    cout<<"invalid position "<<endl;
    else
    insert(first,k,pos);

    cout<<"the elements in the link list is : "<<endl;

    display(first);
}
