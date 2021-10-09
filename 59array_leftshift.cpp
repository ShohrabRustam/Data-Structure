#include<iostream>
using namespace std;
int left_shift(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    for (int i=0;i<n-1;i++) 
    {
        cout<<arr[i]<<endl;
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
    left_shift(array,n);
    return 0;
}