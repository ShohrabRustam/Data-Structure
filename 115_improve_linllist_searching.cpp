#include<iostream>
#include<conio.h>
using namespace std;
struct Node
{
	int info;
	struct Node *next;
}*first=NULL;
void create(int A[],int n)
{
	struct Node *temp,*last;
	first=new Node;
	first->info=A[0];
	first->next=NULL;
	last=first;
	for (int i=1;i<n;i++)
	{
		temp=new Node;
		temp->info=A[i];
		temp->next=NULL;
		last->next=temp;
		last=temp;
	}
}


void search (struct Node*p,int k)
{
	while (p!=NULL)
	{
	
struct Node *q;
if(k==p->info)
{
    q->next=p->next;
    p->next=first;
cout<<"the elements found :"<<endl;
}

p=q;

p=p->next;
	
}
}
int main ()
{
	int n;
	cout<<"enter the size of the link list:"<<endl;
	cin >>n;
	int array[n];
	cout<<"enter the elements into the list"<<endl;
	for (int i=0;i<n;i++)
	{
		cin >>array[i];
	}
	create(array,n);
	int key;
	cout<<"enter the elements to search from list"<<endl;
	cin >>key;
	search(first,key);
}