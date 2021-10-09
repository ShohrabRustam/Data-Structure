#include<iostream>
using namespace std;
int right_shift(int arr[],int n)
{
	int temp;
	int b[n];
    for (int i=0;i<n;i++)
    {
    	temp=arr[i];
        b[i+1]=arr[i];
    }
    for (int i=0;i<n;i++) 
    {
    	b[0]=arr[n-1];
        cout<<b[i]<<endl;
    }

}
int main ()
{
    int n;
    cout<<"enter the size of the array "<<endl;
    cin >>n;
    int array[n];
    cout<<"enter the elements into the array "<<endl;
    for (int i=0;i<n;i++)
    {
        cin >> array [i];
    }
    cout<<"array after the left shif "<<endl;
    right_shift(array,n);
    return 0;
}