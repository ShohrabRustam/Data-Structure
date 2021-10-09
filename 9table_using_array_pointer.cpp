#include<iostream>
using namespace std;
void printtable(int *multable,int num,int n)
{
    int i;
    for(i=0;i<n;i++){

multable[i]=num*(i+1);
}
for(i=0;i<n;i++)
{
    cout<<num<<i+1<<multable[i]<<endl;
}
}
int main()
{
int multable[3][10];
int t1,t2,t3;
cout<<"enter the three number to print table  \n";
cin>>t1>>t2>>t3;
printtable(multable[10],t1,10);
printtable(multable[1],t2,10);
printtable(multable[2],t3,10);
return 0;
 }