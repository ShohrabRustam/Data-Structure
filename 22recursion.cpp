#include<iostream>
using namespace std;
void fun(int n)
{
    if (n>0)
    {
    fun(n-1);
    cout<<"i am in room  "<<n<<" and switch on light\n"<<endl;
    }
}
void fun2(int n)
{
    if (n>0)
    {
    cout<<"reached in room "<< n <<" i am going to turn on light\n"<<endl;
    fun2(n-1);
    }
}
int main()
{
    int x=15;
    fun(x);
    fun2(x);
    return 0;
    
    
}