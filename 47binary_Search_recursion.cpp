#include <iostream>
using namespace std;


int binarySearch(int A[], int N, int x)
{
	// search space is A[low..high]
	int low = 0, high = N - 1;

	// iterate till search space contains at-least one element
	while (low <= high)
	{
		// find the mid value in the search space and
		// compares it with target value

		int mid = (low + high)/2;	// overflow can happen
		// int mid = low + (high - low)/2;
		// int mid = high - (high - low)/2;

		// target value is found
		if (x == A[mid])
			return mid;

		// if target is less than the mid element, discard all elements
		// in the right search space including the mid element
		else if (x < A[mid])
			high = mid - 1;

		// if target is more than the mid element, discard all elements
		// in the left search space including the mid element
		else
			low = mid + 1;
	}

	// target doesn't exist in the array
	return -1;
}

// Iterative implementation of Binary Search Algorithm
int main(void)
{
    int n;
    cout<<"enter the size of the array "<<endl;
    cin >>n;
	int A[n];
    cout<<"enter "<<n<<" sorted elements into the array "<<endl;
    for(int i=0;i<n;i++)
     {
    cin >>A[i];
    }

	int key;
    cout<<"enter the key to be search "<<endl ;
    cin >>key;


	int index = binarySearch(A, n, key);

	if (index != -1)
		cout<<"Element found at index"<< index<<endl;
	else
		cout<<"Element not found in the array"<<endl;;

	return 0;
}