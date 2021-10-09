//A recursive function calling itself more than one times
#include<iostream>
using namespace std;
void fun(int n)
{
    if (n>0)
    cout<<" "<<n<<endl;
    fun(n-1);
    fun(n-1);
}
int main()
{
    int x=15;
    fun(x);
    return 0;
    
    
}