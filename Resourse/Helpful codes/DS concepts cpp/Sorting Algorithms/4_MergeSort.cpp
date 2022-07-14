#include <iostream>
using namespace std;

void merge(int A[], int low, int high, int mid);
void merge_sort(int *A, int low, int high);
void PrintArray(int A[], int n);

int main(void)
{
    int A[50], n;
    cout<<"Enter number of elements to be sorted:"; cin>>n;
    cout<<"Enter elements:";
    for (int input=0; input<n; input++) { cin>>A[input]; }

    merge_sort(A, 0, n-1);
    PrintArray(A, n);

    return 0;
}


void merge_sort(int A[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = low + (high-low)/2 ;
        merge_sort(A,low,mid);
        merge_sort(A,mid+1,high);
        merge(A,low,high,mid);
    }
}

void merge(int A[], int low, int high, int mid)
{
    int i, j, k, c[100];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (A[i] < A[j]) { c[k] = A[i]; k++; i++; }
        else { c[k] = A[j]; k++; j++; }
    }
    while (i <= mid) { c[k] = A[i]; k++; i++; }
    while (j <= high) { c[k] = A[j]; k++; j++; }

    for (i=low; i<k; i++)
    {
        A[i] = c[i];
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
