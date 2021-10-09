#include<iostream>
using namespace std;
struct array
{
    int length ;
    int size ;
    int A[10];
};
void display(struct array arr)// object pass into the array 
{
	for (int i=0;i<arr.length;i++)
	{
		cout<<arr.A[i];
		}	
}
int main ()
{
    array a;
    cout <<"Enter the size of the array "<<endl;
    cin>>a.length ;
    cout<<"enter the input into the array "<<endl;
    for (int i=0;i<a.length;i++)
    {
    	cin >>a.A[i];
	}
	display(a);
}