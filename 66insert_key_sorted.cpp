#include<iostream>
using namespace std ;
int insert (int arr[], int key,int n)
{
	   int i;
      for(i=0;i<n-1;i++){
        if(arr[i]>key)
          break;
      }
      for(int k=n-2; k>=i; k--){
        arr[k+1]=arr[k];            
      }
      arr[i]=key;
        
	
	for (int j=0;j<=n;j++)
	{
		cout<<arr[j]<<endl;
	}
}
int main ()
{
    int n;
    cout<<"enter the size of  first the array"<<endl;
    cin >>n;
    
    int a[n];
    cout<<"enter the elements into the first array"<<endl;
    
        for (int i=0;i<n;i++)
        cin >>a[i]; 
  int k;
  cout<<"enter the elements into the sorted array"<<endl;
  cin >>k;
  cout<<"the new array is "<<endl;
  insert(a,k,n);
    return 0;
}
