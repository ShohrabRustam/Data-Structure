
#include <bits/stdc++.h>
using namespace std;
int is_sorted(int arr[],int n)
{
    for (int i=1;i<n;i++)
    {
        if (a[i-1]>a[i])
        return 0;
        else 
        return 1;
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
        cin >>array[i];
    }
    int c;
    c=is_sorted(array,n);
    if (c==0)
    cout<<"array is not sorted"<<endl;
    else 
    
    return 0;

}

