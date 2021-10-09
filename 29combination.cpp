#include<iostream>
using namespace std;
int combination(int n,int r)
{
    if(n==0||n==r)
     return 1;
     else
     return combination(n-1,r-1)+combination(n-1,r);
}
int main ()
{
    int n,r;
    cout<<"enter the value of n and r to find combination\n";
    cin>>n>>r;
    if (r>n)
    cout<<"invalid number co n't find \n";
    else
    {
        cout<<"the combination is : "<<combination(n,r);
    }
    
}