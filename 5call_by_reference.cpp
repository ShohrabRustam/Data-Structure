#include<iostream>
using namespace std;
int swap(int &a,int &b)
{
int temp;

temp=b;
b=a;
a=temp;
return 0;

}
int main()
{
    int x=56,y=89;
   swap(x,y);
   cout<<"value of x is:"<<x<<"value of y is:"<<y;
return 0;
}