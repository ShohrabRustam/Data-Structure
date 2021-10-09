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
  int c[n+m];
     int i = 0, j = 0,k=0; 
	 cout<<"the union of the array"<<endl;
	 int flag;
	//copy first array into another	 
  for(i=0;i<n;i++)
  {
        c[k]=a[i];
        k++;
    }
 
    for(i=0;i<m;++i)
	{
        flag=1;
        for(j=0;j<n;++j)
		{
            if(a[i]==b[j])
			{
                flag=0;
                break;
            }
        }
 
        if(flag){
            c[k]=b[i];
            k++;
        }
    }
 
    cout<<"\nUnion of two arrays is :: \n\n";
    for(i=0;i<k;++i)
    {
        cout<<c[i]<<"  ";
    }
 
    cout<<"\n";
 
    return 0;
}