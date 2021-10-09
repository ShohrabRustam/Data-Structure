//A recursive function calling itself more than one times
#include<iostream>
using namespace std;
void funB(int n)
{
    if (n>0)
    cout<<n<<endl;
    funA(n-3);
}
void funA(int n)
{
    if (n>0)
    cout<<n<<endl;
    funB(n-1);
}

int main()
{
    int x=15;
    funA(x);
    return 0;
    
    
}