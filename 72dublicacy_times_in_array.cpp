#include<iostream>
using namespace std;
int dublication(int arr[],int n)
{
 int Hash[arr[n-1]];

 for (int i=0;i<=arr[n-1];i++)
{
	
	Hash[i]=0;
	
}

for (int i=0;i<n;i++)
{
	Hash[arr[i]]++;
}
for (int i=0;i<=arr[n-1];i++)

if(Hash[i]>=1)
cout<<"the elments of "<<i<<" are in "<<Hash[i]<<" times"<<endl;
return 0;
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