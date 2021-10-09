#include<iostream>
using namespace std;
int permutation(int n,int r)
{
if (n==0||r==0)
return 1;
else 
return n*permutation(n-1,r)/(n-r)*permutation(n,n-r-1);
}
int main ()
{
    int n,r;
    cout<<"enter the value of n and r to find permutation\n";
    cin>>n>>r;
    if (r>n)
    cout<<"invalid number co n't find \n";
    else
    {
        cout<<"the combination is : "<<permutation(n,r);
    }
    return 0;
}