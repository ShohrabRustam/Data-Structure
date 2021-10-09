#include<iostream>
using namespace std;
int maxsum(int A[],int n)
{
	int sum=0;
 int i, j, min, temp;
   for (i = 0; i < n - 1; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
      if (A[j] < A[min])
      min = j;
      temp = A[i];
      A[i] = A[min];
      A[min] = temp;
   }
  for (i=n-1;i>=n-4;i--)
   sum+=A[i];
   cout<<sum;
}

int main()
{
	int n;
	cout<<"enter the size of an array"<<endl;
	cin>>n;
	int array[n];
	cout<<"enter the elements into the array"<<endl;
	for (int i=0;i<n;i++)
	cin>>array[i];
	
	maxsum(array,n);
}
