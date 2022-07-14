#include <iostream>
using namespace std;

// Global Declaration of Array
const int N = 1e6;
int A[N];
int n; //array size
int x; //elememt to be searched in array

int RBinarySearch(int A[], int low, int high, int x);

int main(void)
{
	int A[] = {2, 6, 13, 21, 36, 47, 63 ,81, 97};
	int x = 36;
	int n = sizeof(A)/sizeof(A[0]) ;

	int result = RBinarySearch(A, 0, n - 1, x);

	(result==-1) ? cout << "Element is not present in array"<<endl
				 : cout << "Element is present at index " << result<< endl;

	return 0;
}


int RBinarySearch(int A[], int low, int high, int x)
{
    if (low>high) return -1;
    int mid = low + (high-low)/2 ; //Same as = (low+high)/2 so (h+l) does not overflow

    if ( x == A[mid] ) { return mid; }
    else if( x<A[mid] ) { return RBinarySearch(A, low,  mid-1, x); }
    else { return RBinarySearch(A, mid+1,  high, x); }
}
