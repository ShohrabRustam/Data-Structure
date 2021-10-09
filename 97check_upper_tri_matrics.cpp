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
            cin >>a[i][j];
           
        } 

    }

        for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if((i>=j && a[i][j]!=0)||i<j&&a[i][j]==0)
            {
            cout<<"upper triangular matrix"<<endl;
            break;
            }
            else
            { 
            cout<<"not upper triangular "<<endl;
            break;
            }

        } 

    }
    return 0;
}