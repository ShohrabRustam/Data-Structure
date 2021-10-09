#include<iostream>
using namespace std;
int dublication(int arr[],int n)
{

 for (int i=0;i<=n-1;i++)
 if (arr[i]!=-1)
{
	int count=1;
	
	for(int j=i+1;j<n;j++)
	{
		if(arr[i]==arr[j])
		{
		
		count++;
		arr[j]=-1;
	}
		}	
			cout<<"elements "<<arr[i]<<" is "<<count<<endl;
}

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
	cout<<"the dublicacy term are"<<endl;
	dublication(array,n);
	return 0;
}