#include<iostream>
using namespace std;
int max(int arr[],int n)
{
	int max,i;
max=arr[0];
for (i=0;i<n;i++)
{
	if (arr[i]>max)
	max=arr[i];
}
return max;
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
	c=max(array,n);
	cout<<"the maximum elements into the array is "<<max(array,n)<<endl;
	return 0;

}