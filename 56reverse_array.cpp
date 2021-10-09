#include<iostream>
using namespace std ;
int display(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 1;
}
int  reverse(int arr[],int n)
{
for (int i=n-1;i>=0;i--)
{
    cout<<arr[i]<<endl;
}
return 1;
}
int main(void)
{
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>> n;
    int array[n];
    cout<<"enter the elements into the array"<<endl;
    for (int i=0;i<n;i++)
    {
        cin >>array[i];
    }
    cout<<"the array is :"<<endl;
    display(array,n);
    cout<<"the reverse array is :"<<endl;
    reverse(array,n);
    return 0;
}
