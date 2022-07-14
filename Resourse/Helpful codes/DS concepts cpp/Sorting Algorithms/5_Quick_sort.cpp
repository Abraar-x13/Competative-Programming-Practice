#include <iostream>
using namespace std;

void swap(int* a, int* b);
int partition (int A[], int low, int high);
void quickSort(int A[], int low, int high);
void printArray(int A[], int size);

int main(void)
{
	int A[30], n;
	cout<<"Enter number of elements to be sorted:"; cin>>n;
	cout<<"Enter elements:";
	for (int input=0; input<n; input++) { cin>>A[input]; }

	quickSort(A, 0, n - 1);
	cout << "Sorted array: \n";
	printArray(A, n);
	return 0;
}


void quickSort(int A[], int low, int high)
{
	if (low < high)
	{
		int pi = partition(A, low, high);
		quickSort(A, low, pi - 1);
		quickSort(A, pi + 1, high);
	}
}


int partition (int A[], int low, int high)
{
	int pivot = A[high]; // pivot
	int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far

	for (int j=low; j<=high-1; j++)
	{
		// If current element is smaller than the pivot
		if (A[j] < pivot)
		{
			i++; // increment index of smaller element
			swap(&A[i], &A[j]);
		}
	}
	swap(&A[i + 1], &A[high]);
	return (i + 1);
}


void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}


void printArray(int A[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << A[i] << " ";
	cout << endl;
}
