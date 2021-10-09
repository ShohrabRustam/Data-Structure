#include<iostream>
using namespace std;
int fact(int n)
{
    if (n==0||n==1)
    return 1;
    else 
    return n*fact(n-1);
}
int combination(int n,int r)
{
    if (n==0||n==r)
    return 1;
     return fact(n)/(fact(n-r)*fact(r));
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