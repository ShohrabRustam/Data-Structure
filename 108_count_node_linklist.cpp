#include<iostream>
using namespace std;
struct Node
{
	int info;
	struct Node *next;
	
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

void count(struct Node *p)
{
	int c=0;
 while(p!=NULL)
 {
	c++;
 p=p->next;
 }
 cout<<"the node is : "<<c<<endl;
}
	
	



int main ()

{
	
	 int n;
	 cout<<"enter the elements into the list"<<endl;
	 cin >>n;
	 
	 cout<<"enter the elements into list "<<endl;
	 int array[n];
	 
	 for (int i=0;i<n;i++)
	 cin >> array[i];
	 
	 create(array,n);
	 
	count(first);
	 
	 return 0;

}