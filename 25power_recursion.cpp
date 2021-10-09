//A recursive function calling itself more than one times
#include<iostream>
using namespace std;
int powe(int n,int m)
{
    if (m<=0)
    return 1;
    else
    return n*powe(n,m-1);
}
int main()
{
    int power;
    int num,ex;
    cout<<"enter the number and exp to find power\n";
    cin>> num >>ex;
    power= powe (num,ex);
    cout<<"the power of number is : "<<power<<endl;
    return 0;
    
    
}