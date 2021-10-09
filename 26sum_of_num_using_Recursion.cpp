//A recursive function calling itself more than one times
#include<iostream>
using namespace std;
int Sumofnatural(int n)
{
    if (n<0)
    return 0;
    else
    return n+Sumofnatural(n-1);
}
int main()
{
    int sum;
    int x;
    cout<<"enter the number to find the sum\n";
    cin>>x;
    sum=Sumofnatural(x);
    cout<<"the sum of the natural number is :"<<sum<<endl;
    return 0;
    
    
}