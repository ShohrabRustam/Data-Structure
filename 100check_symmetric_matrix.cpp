#include<iostream>
using namespace std;
int main ()
{
    int i,j;
    int n;
    cout<<"enter the size of the matrics "<<endl;
    cin >>n;
    int a[n][n];
    cout<<"enter the elements in to the  matrics"<<endl;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            cin>>a[i][j];
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
    int flag;
     for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if(a[i][j]!=a[j][i])
            {
            cout<<"not symmetric "<<endl;
            break;
            } 
            else 
            {
            break;
            }
            cout<<"symmetrix"<<endl;
        

        }
}
        
}