#include<iostream>
using namespace std;
int fact(int p)
{
    if (p==0)
    return 1;
    else 
    return p*fact(p-1);
}
int permutation(int n,int r)
{
if (n==0||r==0)
return 1;

return fact(n)/fact(n-r);
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