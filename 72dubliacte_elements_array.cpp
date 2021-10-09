#include<iostream>
using namespace std;
int dublication(int arr[],int n)
{
 int dublicate=0;

for (int i=0;i<n;i++)
{
	if(arr[i]==arr[i+1]&& arr[i]!=dublicate)
	cout<<arr[i]<<endl;
	dublicate=arr[i];
}
}

int main()
{
	int n;
	cout<<"enter the size of the array "<<endl;
	cin>>n;
	int array[n];
	cout<<"enter the elements into the sorted array "<<endl;
	for (int i=0;i<n;i++)
	cin >>array[i];
	cout<<"the dublicacy term are"<<endl;
	dublication(array,n);
	return 0;
}