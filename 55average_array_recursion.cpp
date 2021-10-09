#include<iostream>
using namespace std;
int avg(int arr[],int n)
{
if (n<0)
return 0;
return avg(arr,n-1)+arr[n];
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
	float c;
	c=avg(array,n);
	cout<<"the avg of elements of the array is "<<(float)avg(array,n)/n<<endl;
	return 0;

}