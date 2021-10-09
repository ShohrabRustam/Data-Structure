#include <iostream>
using namespace std;
void mergeSortedArrays(int *arr1, int n1, int *arr2, int n2, int *result){
   int i, j, k;
   i = 0;
   j = 0;
   k = 0;
   while (i < n1 && j < n2) 
   {
      if (arr1[i] < arr2[j]) 
	  {
         result[k] = arr1[i];
         ++k;
         ++i;
      } 
	  else 
	  {
         result[k] = arr2[j];
         ++k;
         ++j;
      }
   }
   while (i < n1) 
   {
      result[k] = arr1[i];
      ++k;
      ++i;
   }
   while (j < n2) {
      result[k] = arr2[j];
      ++k;
      ++j;
   }
}
void dispalyArray(int *arr, int n)
{
   for (int i = 0; i < n; ++i) 
   {
      cout << arr[i] << " ";
   }
   cout << endl;
}
int main()
{
	int n;
	cout<<"enter the size of the array " << endl;
	cin >>n;
	
	int arr1[n];
   cout<<"enter the elements into the first array "<<endl;
   for (int i=0;i<n;i++)
   {
   	cin>>arr1[i];
   }
   
   int m;
   cout<<"enter the size of the second array"<<endl;
   cin >>m;
   
   int arr2[m];
   cout<<"enter the elements into the second array"<<endl;
   for (int j=0;j<m;j++)
   cin>>arr2[j];
   int result[n+ m];
   cout << "First sorted array :" << endl;
   dispalyArray(arr1, n);
   cout << "Second sorted array:" << endl;
   dispalyArray(arr2, m);
   mergeSortedArrays(arr1, n, arr2, m, result);
   cout << "Final sorted array:" << endl;
   dispalyArray(result, n+m);
   return 0;
}