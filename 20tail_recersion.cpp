// A recursive fun() calls itself at the last such function known as tail recursion 
#include<iostream>
using namespace std;
void fun(int n)
{
    if (n>0)
    cout<<" "<<n<<endl;
    fun(n-1);
}
int main()
{
    int x=15;
    fun(x);
    return 0;
    
    
}