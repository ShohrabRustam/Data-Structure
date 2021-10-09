#include<iostream>
using namespace std;
int fun(int a[],int n)
{
int i;
for(i=0;i<n;i++)
{
    cout<<a[i]<<endl;
}

}
int main()
{
    int a[]={2,4,6,8,10,12};
    int n=5;
    fun(a,n);
return 0;
}