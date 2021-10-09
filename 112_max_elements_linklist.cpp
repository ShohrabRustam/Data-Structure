#include<iostream>
using namespace std;
struct Node
{
	int info;
	struct Node *next;
}*first=0;

int create(int A[],int n)
{
	struct Node *temp,*last;
	first= new Node;
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

int max(struct Node *p)
{
	int max=p->info;
	while (p!=NULL)
	{
		if (max<p->info)
		max=p->info;
		p=p->next;
	}
	cout<<"the maximum elements is :  "<<max<<endl;
}
int main()
{
	int n;
	cout<<"enter the size of the link list "<<endl;
	cin >>n;
	int array[n];
	cout<<"enter the elements into the link list"<<endl;
	for(int i=0;i<n;i++)
	cin >>array[i];
	create(array,n);
	max(first);
}