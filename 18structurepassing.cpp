#include<iostream>
using namespace std;
struct Rectangle{
    int length,breadth;
};
void changevariable(struct Rectangle *p,int len,int bre)
{
    
    p->length=len;// modified actual parameter into the main program
    p->breadth=bre;// modified actual parameter into the main program
}
int area(struct Rectangle r1)
{
    return r1.length*r1.breadth;
}
int main()
{
struct Rectangle r;
r.length=10;
r.breadth=25;
changevariable(&r,30,25);
cout<<area(r)<<"\n";
cout <<r.length <<endl;//here the value of length is 30
return 0;
}