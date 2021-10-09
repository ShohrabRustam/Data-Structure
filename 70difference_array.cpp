#include<iostream>
using namespace std;
int main ()
{
      int n,m,size;
      int i=0,j=0,k=0;
  cout<<"enter the size of the array "<<endl;
  cin >>n;
  cout<<"enter the elements into the array "<<endl;
  int a[n];
  for (int i=0;i<n;i++)
  cin >>a[i];
  cout<<"enter the size of the second array "<<endl;
  cin >>m;
  int b[m];
  cout<<"enter the elements into the second array "<<endl;
  for (int i=0;i<m;i++)
  cin >>b[i];
  int c[n];
    for (i=0;i<m;i++)               
    {                                
        for (j=0;j<n;j++)                                
        {
            if (a[i]==b[j])
            {                                                                                                                                    break;                                                   
            }
        }
        
        if (j==n)                                              
            {
                c[k]=a[i];
                k++;
            }
        }
    cout<<"the difference of the two array set is "<<endl;
    for (int i=0;i<k;i++)
    cout<<c[i]<<" "<<endl;
return 0;
}