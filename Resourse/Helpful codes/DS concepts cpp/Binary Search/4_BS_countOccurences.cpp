#include <iostream>
using namespace std;

// Global Declaration of Array
const int N = 1e6;
int A[N];
int n; //array size
int x; //elememt to be searched in array

int BinarySearchFndLO(int A[], int n, int x, bool isfo);

int main(void)
{
	int A[] = {2, 6, 10, 10, 10, 10, 63 ,81, 97};
	int x = 10;
	int n = sizeof(A)/sizeof(A[0]) ;

	int result = BinarySearchFndLO(A, 9, x, 0)-BinarySearchFndLO(A, 9, x, 1) ;

	std::cout << "Number of occurences: " << result << '\n';
    return 0;
}

int BinarySearchFndLO(int A[], int n, int x, bool isfo)
{
    // if isfo is 1, FO
    // is ifso is 0, LO
    int low = 0;
    int high = n-1;
	int result = -1;
    while(low <= high)
    {
        int mid = low + (high-low)/2 ; //Same as = (low+high)/2 so (h+l) does not overflow

        if ( x == A[mid] )
		{
			result = mid;
            if (isfo)
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
		}
        else if( x<A[mid] ) { high = mid-1; }
        else { low =mid+1; }
    }
    return result;
}
