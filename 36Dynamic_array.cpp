#include<iostream>
using namespace std;
int main()// to icrease the size of the array
{
    int n;
    int m,i;
    cin>>n>>m;
    // n>m 
    int *p = new int [m];
    int *q = new int [n];
    for (i=0;i<m;i++)
    {
        cin>>p[i];
    }
    for (i=0;i<m;i++)//copy array size m into size n
    {
    q[i]=p[i];
    }
    delete[] p;
    p=q;
    q= NULL;
    return 0;
}