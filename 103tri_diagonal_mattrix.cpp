#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter the size of the matrix"<<endl;
    cin >>n;
    int i,j;
    int a[n][n];
    cout<<"enter the elements into tri-diagonal matrix "<<endl;
    for ( i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if(i==j|| i-j==1|| j-i==1)
            cin>>a[i][j];
            else 
            a[i][j]=0;
        }
    }
    cout<<"the tri-diagonal matrix : "<<endl;
       for ( i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            
            cout<< a[i][j] <<"  ";      
        }
        cout<<"\n";
    }
}
