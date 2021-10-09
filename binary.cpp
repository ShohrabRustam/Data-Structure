#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the elements into array"<<endl;
	for (int i=0;i<n;i++)
	cin>>arr[i];
	int key;
	cout<<"enter the key to search "<<endl;
	cin>>key ;
            int first=0;
	        int last=n-1;
	while(first<=last)
	{
		int mid;
		mid=(first+last)/2;
		if(arr[mid]==key)
		{
			cout<<"key "<< arr[mid]<<" found at possition " <<mid+1;
			break;
		}
		else if (arr[mid]>key)
		{
			last=mid-1;
		}
		else if(arr[mid]<key)
		first=mid+1;
	}
	if (first>last)
	cout<<"key not found"<<endl;
     return 0;

}
