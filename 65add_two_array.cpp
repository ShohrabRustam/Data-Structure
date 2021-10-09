#include<iostream>
using namespace std ;
int add_array(int arr1[],int arr2[],int n,int m)
{
    int array[n+m];
    for (int i=0;i<n;i++)
    {
        array[i]=arr1[i];
    }
        for (int j=0;j<m;j++)
        array[n+j]=arr2[j];

    for (int i=0;i<n+m;i++)
    cout<<array[i]<<endl;;
    return 0;
}
int main ()
{
    int n;
    cout<<"enter the size of  first the array"<<endl;
    cin >>n;
    
    int a[n];
    cout<<"enter the elements into the first array"<<endl;
    
        for (int i=0;i<n;i++)
        cin >>a[i]; 
    int m;
    cout<<"enter the size of the second array "<<endl;
    cin >>m;
    int b[m];
    cout<<"enter the elements into the second array:"<<endl;
    for (int j=0;j<m;j++)
    cin >>b[j];
    cout <<"the addition of two array is "<<endl;
    add_array(a,b,n,m);
    return 0;
}
