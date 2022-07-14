#include <iostream>
using namespace std;

int findRotationCount(int A[], int n);

// Global Declaration of Array
const int N = 1e6;
int A[N];
int n; //array size
int x; //elememt to be searched in array

int main(void)
{
   int A[] = {11, 12, 15, 18, 2, 5, 6, 8};
   int x = 36;
   int n = sizeof(A)/sizeof(A[0]) ;

   int rotation = findRotationCount(A, 9);
   int result = A[rotation];
   cout << "Lowest element is : " << result<< endl;

   return 0;
}

int findRotationCount(int A[], int n)
{
    int low = 0;
    int high = n-1;
    int mid;

    while(low <= high)
    {
        if (A[low] <= A[high]) { return low; } // case 1: sorted
        mid = low + (high-low)/2 ;
        if (A[mid]<=A[mid+1] && A[mid]<=A[mid-1]) // case 2 : pivot
        {
            return mid;
        }
        else if (A[mid] <=A[high]) { high = mid-1; }
        else if (A[mid] >=A[low]) { low = mid+1; }
    }
    return -1;
}
