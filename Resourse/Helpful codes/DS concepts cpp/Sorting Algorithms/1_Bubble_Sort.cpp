#include <iostream>
using namespace std;

void PrintArray(int A[], int n);
void BubbleSort(int A[], int n);

int main(void)
{
    int n;
    cout<<"Number of elements in Array : ";
    cin>>n;
    int A[n];
    for (int input=0; input<n; input++) { cin>>A[input]; }

    BubbleSort(A, n);

    cout << "Sorted Array: \n";
    PrintArray(A,n);

    return 0;
}

void BubbleSort(int A[], int n)
{
    for (int i=0; i<n-1; i++) // i == num of passes

    // Last i elements are already in place
    for (int j=0; j<(n-i-1); j++)
    {
        if (A[j] > A[j+1])
        {
            int temp = A[j];
            A[j]=A[j+1];
            A[j+1]= temp;
        }
    }
}

void PrintArray(int A[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n ";
}
