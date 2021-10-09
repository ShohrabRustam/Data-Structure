#include<iostream>
using namespace std;
int missing(int arr[],int n)
{
	int first =arr[0];
	int diff=arr[1]-arr[0];
	for (int i=1;i<n;i++)
	{

	if (arr[i]-diff*i!=first)
	{
	
	return (first+diff*i); 
	break;
	}
}
}

int main()
{
	int n;
	cout<<"enter the size of the array "<<endl;
	cin>>n;
	int array[n];
	cout<<"enter the elements into the array"<<endl;
	for (int i=0;i<n;i++)
	cin >>array[i];
	cout<<"the missing term are"<<endl;
	cout<<"the missing element is "<<missing(array,n)<<endl;
	
	
	return 0;
}