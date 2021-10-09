#include<iostream>
using namespace std;
int max_min(int arr[],int n)
{
int max,min;
max=min=arr[0];
 for (int i=1;i<=n;i++)
{
	if (max<=arr[i])
	max=arr[i];
	else if (min>arr[i])
	min=arr[i];
	
}

cout<<"the maximun number is "<<max<<endl;
cout<<"the minimun number is "<<min<<endl;
return 0;
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
	max_min(array,n);
	return 0;
}