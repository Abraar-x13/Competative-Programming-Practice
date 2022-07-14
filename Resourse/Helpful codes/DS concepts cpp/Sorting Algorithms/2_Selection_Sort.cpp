#include <iostream>
using namespace std;

void PrintArray(int A[], int n);
void SelectionSort(int A[], int n);

int main(void)
{
    int n;
    cout<<"Number of elements in Array : ";
    cin>>n;
    int A[n];
    for (int input=0; input<n; input++) { cin>>A[input]; }

    SelectionSort(A, n);

    cout << "Sorted Array: \n";
    PrintArray(A,n);

    return 0;
}

void SelectionSort(int A[], int n)
{
    for (int i=0; i<(n-1); i++)
    {
        int indexOfMinArray = i;
        for (int j=i+1; j<n; j++)
        {
            if (A[j]<A[indexOfMinArray]) { indexOfMinArray = j; }
        }
        if (i!=indexOfMinArray)
        {
            int temp = A[i];
            A[i]=A[indexOfMinArray];
            A[indexOfMinArray]= temp;
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
