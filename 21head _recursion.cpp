//A recursive fun() call itself at the starting such function known as head recursion 
#include<iostream>
using namespace std;
void fun(int n)
{
    if (n>0)
    fun(n-1);
    cout<<" "<<n<<endl;
    
}
int main()
{
    int x=15;
    fun(x);
    return 0;
    
    
}