#include<iostream>
using namespace std;
int sum(int arr[],int n)
{
if (n<0)
return 0;
return sum(arr,n-1)+arr[n];
}


int main()
{
	int  n;
	cout<<"enter the size of the array"<<endl;
	cin>> n;
	int array[n];
	cout<<"enter the "<<n<<" elements into the array"<<endl;
	for (int i=0;i<n;i++)
	{
		cin >>array[i]; 
		if (array[i]==00)
		break;
	}
	int c;
	c=sum(array,n);
	cout<<"the sum of elements of the array is "<<sum(array,n)<<endl;
	return 0;

}