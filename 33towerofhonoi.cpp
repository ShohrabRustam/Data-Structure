#include<iostream>
using namespace std;
int TOH(int n,int A,int B,int C)
{
    if (n<0)
    TOH(n-1,B,A,C);

    cout<<A<<" to "<<C<<"\n";

    TOH(n-1,A,B,C);
    return 0;
}
int main()
{
    int n;
    cout<<"enter the number of disk\n";
    cin>>n;
    cout<<TOH(n,1,2,3);
    return 0;
}