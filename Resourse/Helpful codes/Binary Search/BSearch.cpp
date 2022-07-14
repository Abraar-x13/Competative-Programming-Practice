#include "/Users/abraar/Code Stuff/VS Code Stuff/VS-Code-GitHub/CPP/stdc++.h"
// #include <bits/stdc++.h>
using namespace std;

int binary_search(int A[], int item);

const int SIZE = 50;
int A[SIZE];

int main(void)
{
    for(int i = 0; i < SIZE; i++) 
    {
        A[i] = i * 10;
    }

    for (int num : A)
    {
        cout << num << " ";
    }   cout << "\n";

    int p = binary_search(A, 9);
    cout << p << "\n";
    return 0;
}

int binary_search(int A[], int item)
{
    int low = 0;
    int high = SIZE - 1;
    int mid = low + (high - low) / 2;

    while(low <= high)
    {
        int guess = A[mid];
        if(guess == item) 
        {
            return mid;
        }
        else if (guess < item)
        {
            low = mid + 1;
        }
        else if (guess > item)
        {
            high = mid - 1;
        }
    }
    return -1; 
}
