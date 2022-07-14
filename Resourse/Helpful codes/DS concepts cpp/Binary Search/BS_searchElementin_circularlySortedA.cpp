/*
    code doesnt work. WA : https://www.youtube.com/watch?v=uufaK2uLnSI&list=PL2_aWCzGMAwL3ldWlrii6YeLszojgH77j&index=7
*/


#include <iostream>
using namespace std;

int CircularSearch(int A[], int n, int x);

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

   int result = CircularSearch(A, 9, 15);


   (result==-1) ? cout << "Element is not present in array"<<endl
   			 : cout << "Element is present at index " << result<< endl;


   return 0;
}

int CircularSearch(int A[], int n, int x)
{
    int low = 0;
    int high = n-1;

    while(low <= high)
    {
        int mid = low + (high-low)/2 ;
        if ( x ==A[mid] ) { return mid; }
        if (A[mid] <=A[high]) // right half is sorted
        {
            if(x>A[mid] && x <= A[high]) { low = mid+1; } // searching in right sorted half
            else { high = mid-1; }
        }
        else // left half sorted
        {
            if(A[low]<=x && x < A[mid]) { high = mid-1; } // searching in left sorted half
            else { low = mid+1; }
        }
    }
    return -1;
}
