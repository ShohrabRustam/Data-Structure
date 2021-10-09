#include<iostream>
using namespace std ;
void reverse(int arr[],int n)
{
    int j;
int b[n];
for(int i=0,j=0;i<n,j<n;i++,j++)
{
    b[j]=arr[n-1-i];
}
for (int i=0;i<n;i++)
{
    cout<<b[i]<<endl;
}
}
int main ()
{
    int n;
    cout<<"enter the size of the array "<<endl;
    cin >>n;
    int a[n];
    cout<<"enter the elements into the array "<<endl ;
    for (int i=0;i<n;i++)
    {
     
       cin >>a[i];
    }
    cout<<"the reverse array is :"<<endl;
    reverse(a,n);
    return 0;
}