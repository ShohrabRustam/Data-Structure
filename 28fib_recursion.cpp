#include<iostream>
using namespace std;
double fib(int n)
{
    if(n==0||n==1)
    return n;
    else
    {
        return fib(n-1)+fib(n-2);
    }
}
int main()
{
    int term;
    cout<<"enter the term"<<endl;
    cin>>term;
      for (int i=0;i<term;i++)
    {
        int m;
        m=i;
        cout<<"\t"<<fib(m)<<endl;
    }
    cout<<"the sum of the fib series is : "<<fib(term);
    return 0;
}