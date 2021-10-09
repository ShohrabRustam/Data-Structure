#include<iostream>
using namespace std;
double e(int x,int n)
{
   static double s=1;
    if (n==0)
    return s;
    else
    {
        s=1+x/n*s;
        return(e(x,n-1));
    }

}
int main()
{
    int epow,term;
    cout<<"enter the epow and term"<<endl;
    cin>>epow>>term;
    cout<<"the sum of he series is : "<<e(epow,term);
    return 0;
}
