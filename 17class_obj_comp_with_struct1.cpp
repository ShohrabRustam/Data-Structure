#include<iostream>
using namespace std;
class Rectangle{
public:
    int length,breadth;

void changevariable(int len,int bre)
{
// modified actual parameter into the main program    
length=len;
breadth=bre;
}
int area()
{
    return length*breadth;
}
};
int main()
{
Rectangle r;
r.length=10;
r.breadth=25;
r.changevariable(30,40);
cout<<r.area();
cout<<"\t"<<r.length <<"\t"<<r.breadth<<endl;//here the value of length is 30
return 0;
}