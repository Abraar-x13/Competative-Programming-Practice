// check YT : https://www.youtube.com/watch?v=4qjprDkJrjY&list=PL2_aWCzGMAwL3ldWlrii6YeLszojgH77j&index=6
/*
    my code is wrong, explaination by a comment :
        for who don't understand modulo parts
        case 1 if mid = 0 or the first index
        for instance arr = [1, 2]
        prev = mid - 1 = -1 which thrown an error because arr[-1] is out of range
        prev = (mid - 1 + n) % n = 1, it prevent an error from negative index

        case 2 if mid = n - 1 or the last index
        such as arr = [2, 3, 1] , assume that mid = 2
        next = mid + 1 = 3, which arr[3] is out of range
        next = (mid + 1) % n = 0, loop index is initialized to the first index, think like a circular array
*/
/*
    For correct edge cases :
        next = (mid+1)%n
        prev = (mid+n-1)%n
        case 2 fix korte hobe.
*/

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

   int n = sizeof(A)/sizeof(A[0]) ;

   int result = findRotationCount(A, 9);
   cout << "The array is rotated " << result<<" times."<< endl;

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
