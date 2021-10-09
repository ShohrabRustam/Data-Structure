//A recursive function calling itself more than one times
#include<iostream>
using namespace std;
double e(int x,int n)
{
 double static f=1,p=1;
 double r; 
 if (n==0)
 return 1;
 r=e(x,n-1);
 p=p*x;
 f=f*n;
 return r+p/f;
 }
int main()
{
    double x,y;
    cin>>x>>y;
    cout<<"the tailer series is :" << e(x,y);

    return 0;
}