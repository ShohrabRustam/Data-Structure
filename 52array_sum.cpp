#include<iostream>
using namespace std;
int sum(int arr[],int n)
{
	int sum,i;
sum=0;
for (i=0;i<n;i++)
{
	sum+=arr[i];
}
return sum;
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