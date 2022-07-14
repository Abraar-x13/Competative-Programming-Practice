#include <iostream>
using namespace std;

void printArray(int A[], int n);
void insertionSort(int A[], int n);

int main(void)
{
    int n;
    cout<<"Enter the number of elements you want to sort : ";
    cin>>n;
    int A[n];

    for (int input=0; input<n; input++)
    {
        cin>>A[input];
    }

    insertionSort(A, n);
    printArray(A, n);

    return 0;
}


void insertionSort(int A[], int n)
{
    int i,hole;
    for (i=1; i<n; i++)
    {
        int temp = A[i];
        hole = i;
        while (hole>=0 && A[hole-1]>temp)
        {
            A[hole] = A[hole-1];
            hole -= 1;
        }
        A[hole] = temp;
    }
}


void printArray(int A[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n ";
}
