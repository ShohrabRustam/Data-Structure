#include <iostream>
using namespace std;
//Recursive function to check if it
//is in sorted order or not
int arraySortedCheck(int arr[], int n){
   //all elements are checked and
   //all are in sorted order
   if (n == 1 || n == 0)
      return 1;
   //when an array is not in sorted order
   if(arr[n-1] < arr[n-2])
      return 0;
   return arraySortedCheck(arr, n-1);
}
int main()
{
   int n;
   cout<<"enter the size of the array "<<endl;
   cin >> n ;
   int array[n];
   cout<<"enter the elements into the array "<<endl;
   for (int i=0;i<n;i++)
   cin >>array[i];
   if(arraySortedCheck(array, n))
   {
      printf("Array is in sorted order\n");
   }
   else
      printf("Array is not in sorted order\n");
   return 0;
}