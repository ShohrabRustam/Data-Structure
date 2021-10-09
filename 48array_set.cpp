#include<iostream>
using namespace std;
int get(int arr[],int a);
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
	if (index>=0&&index<n)
	{
	
	int c;
	c=get (a,index);
	cout<<"the elements on the index "<<index<<" is "<<get(a,index)<<endl;
	return 0;
    }
    else 
    cout<<"invalid index"<<endl;
}
int get (int arr[],int a)
{
	return arr[a];
}