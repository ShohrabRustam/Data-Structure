#include<iostream>
using namespace std;
int fun(int n)
{
    if (n>6)
    return n-5;
    else
    {
        return fun(fun(n+1));
    }
    
}

int main()
{
    int result;
    int x=7;
    result=fun(x);
    cout<<result<<endl;
    return 0;
    
    
}