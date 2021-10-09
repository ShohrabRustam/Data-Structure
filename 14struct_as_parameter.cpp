#include<iostream>
using namespace std;
struct Rectangle{
    int length,breadth;
};
int area(struct Rectangle r1)
{
    return r1.length*r1.breadth;
    r1.length++;//not modified actual parameter
}
int main()
{
struct Rectangle r;
r.length=10;
r.breadth=25;
cout<<area(r)<<endl;
return 0;
}