#include<iostream>
using namespace std;
struct Rectangle{
    int length,breadth;
};
void changevariable(struct Rectangle *p,int len)
{
    
    p->length=len;// modified actual parameter into the main program
}
int main()
{
struct Rectangle r;
r.length=10;
r.breadth=25;
changevariable(&r,30);
cout<<r.length <<endl;//here the value of length is 30
return 0;
}