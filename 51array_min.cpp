#include<iostream>
using namespace std;
int min(int arr[],int n)
{
	int min,i;
min=arr[0];
for (i=0;i<n;i++)
{
	if (arr[i]<min)
	min=arr[i];
}
return min;
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
	c=min(array,n);
	cout<<"the minimum elements into the array is "<<min(array,n)<<endl;
	return 0;

}