#include<iostream>
using namespace std;
int pairelements(int arr[],int n,int k)
{

 for (int i=0;i<=n-1;i++)
 if (arr[i]!=-1)
{
	int count=0;
	
	for(int j=i+1;j<n;j++)
	{
		if(arr[i]+arr[j]==k)
		{
		count++;

				cout<<"the such pair are  "<<arr[i]<<" and  "<<arr[j]<<" in times "<<count<<endl;
}
}
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
	int k;
	cout<<"the the sum of the term are term are"<<endl;
	cin >>k;
	pairelements(array,n,k);
	return 0;
}