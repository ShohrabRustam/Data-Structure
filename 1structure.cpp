#include<iostream>
using namespace std;
struct Rectangle{
    int length,breadth;
};
int main()
{
struct Rectangle r;
r.length=10;
r.breadth=25;
cout<<r.breadth<<r.length<<endl;
return 0;
}