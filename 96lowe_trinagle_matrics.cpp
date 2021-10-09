#include<iostream>
using namespace std;
int main ()
{int i,j;
    int n;
    cout<<"enter the size of the matrics "<<endl;
    cin >>n;
    int a[n][n];
    cout<<"enter the elements in to the lower triangular matrics"<<endl;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if (i>=j)
            cin >>a[i][j];
            else 
            a[i][j]=0;
        } 

    }

        for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        } 
        cout<<"\n";

    }
}