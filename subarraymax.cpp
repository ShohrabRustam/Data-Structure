// C++ program to print largest contiguous array sum 
#include<iostream> 
#include<climits> 
using namespace std; 

int maxSubArraySum(int a[], int size) 
{ 
	int max_sum = 0;
	int max_end = 0; 

	for (int i = 0; i < size; i++) 
	{ 
		max_end = max_end + a[i];
		if (max_sum < max_end)
			max_sum = max_end;

		if (max_end< 0) 
			max_end = 0; 
	} 
	return sum; 
} 

int main() 
{ 
	int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
	int n = sizeof(a)/sizeof(a[0]); 
	int max_sum = maxSubArraySum(a,n); 
	cout << "Maximum contiguous sum is : "<<maxsum(array,n)<<endl;
	return 0;
}
