#include<iostream>
using namespace std;
struct Node
{
    int info;
    struct Node *next;
}*first=0;
int create(int A[], int n)
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
int sum(struct Node *p)
{
	if (p==0)
	
	
    return 0;
   
    else
	
	  
    return (p->info + sum(p->next));

}
int main ()
{
    int n;
    cout<<"enter the size of the link list"<<endl;
    cin >>n;
    int array[n];
    cout<<"enter the elements into the list "<<endl;
    for(int i=0;i<n;i++)
    {
 		cin >>array[i];       
    }
    
    create(array,n);
    cout<<"the sum of the link list is "<<endl;
 cout<<   sum(first);
}