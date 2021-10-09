//A recursive function calling itself more than one times
#include<iostream>
using namespace std;
int factorial(int n)
{
    if (n<=0)
    return 1;
    else
    return n*factorial(n-1);
}
int main()
{
    int fact;
    int x;
    cout<<"enter the number to find the factorial\n";
    cin>>x;
    fact=factorial(x);
    cout<<"the factoral of number is : "<<fact<<endl;
    return 0;
    
    
}