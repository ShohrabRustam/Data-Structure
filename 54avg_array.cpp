#include<iostream>
using namespace std;
int avg(int arr[],int n)
{
	int avg,i;
avg=0;
for (i=0;i<n;i++)
{
	avg+=arr[i];
}
return avg;
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