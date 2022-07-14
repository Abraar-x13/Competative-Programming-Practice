#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i=0; i<n; i++) { cin >> A[i]; }

    int lb;
    for (int i=1; i<n; i++)
    {
        lb = __gcd(A[i-1],A[i]);
        A[i] = lb;
    }
    cout << n*A[n-1] << endl;
    return 0;
}
