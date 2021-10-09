#include<iostream>
using namespace std;
int main ()
{
  int n,m,size;
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
  size=n+m;
  int count =n;
  int c[size];
     int i = 0, j = 0;
    while (i < n && j < m) 
	{
        if (a[i] > b[j]) 
		{
            j++;
        }
        else if (b[j] > a[i]) 
		{
            i++;
        }
        else 
		{
        
            // when both are equal
            cout << a[i] << " ";
            i++;
            j++;
        }
    }

  
  return 0;
}