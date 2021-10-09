#include<iostream>
using namespace std;
int sum2ele(int a[],int n)
{
	int p,k;
	int n1=0,n2=0;
	for (int i=0;i<n;i++)
		if (a[i]>n1)
		{
			n1=a[i];
			p=i;
		
		}
		for (int i=0;i<n;i++)
		if( i!=p && a[i]>n2&&a[i]!=a[p])
		{
			n2=a[i];
		}
		
	return n1+n2;
}
int main()
{
	int n;
	cout<<"enter the size of the array "<<endl;
	cin>>n;
	int array[n];
	cout<<"enter the elements into the array "<<endl;
	for (int i=0;i<n;i++)
	cin >>array[i];
	cout<<"the sum of two max elements is : "<<sum2ele(array,n)<<endl;
	return 0;	
}
