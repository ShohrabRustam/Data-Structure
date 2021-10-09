#include<iostream>
using namespace std;
int set(int arr[],int a,int b);
int main()
{
	int  n;
	cout<<"enter the size of the array"<<endl;
	cin>> n;
	int a[n];
	cout<<"enter the "<<n<<" elements into the array"<<endl;
	for (int i=0;i<n;i++)
	{
		cin >>a[i]; 
		if (a[i]==00)
		break;
	}
	int index;
	cout<<"enter the index to find the elemets from the array"<<endl;
	cin >> index;
	int value;
	cout<<"enter the value to set on index"<<index<<endl;
	cin>>value;
	if (index>=0&&index<n)
	{
	
	int c;
	c=set(a,index,value);
	cout<<"the elements on set on the index "<<index<<" is "<<set(a,index,value)<<endl;
	return 0;
    }
    else 
    cout<<"invalid index"<<endl;
}
int set(int arr[],int a,int key)
{ 
	arr[a]=key;
	
	return arr[a];
}