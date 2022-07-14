#include <iostream>
using namespace std;

// Global Declaration of Array
const int N = 1e6;
int A[N];
int n; //array size
int x; //elememt to be searched in array

int BinarySearchFO(int A[], int n, int x);

int main(void)
{
	int A[] = {2, 6, 10, 10, 10, 47, 63 ,81, 97};
	int x = 10;
	int n = sizeof(A)/sizeof(A[0]) ;

	int result = BinarySearchFO(A, 9, x);

	(result==-1) ? cout << "Element is not present in array"<<endl
			 : cout << "Element is present at index " << result<< endl;

	return 0;
}

int BinarySearchFO(int A[], int n, int x)
{
    int low = 0;
    int high = n-1;
	int result = -1;
    while(low <= high)
    {
        int mid = low + (high-low)/2 ; //Same as = (low+high)/2 so (h+l) does not overflow

        if ( x == A[mid] )
		{
			result = mid;
			high = mid -1;   // low = mid+1 if asekd last occurance
		}
        else if( x<A[mid] ) { high = mid-1; }
        else { low =mid+1; }
    }
    return result;
}
