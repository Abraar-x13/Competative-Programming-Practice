#include <bits/stdc++.h>
using namespace std;


int main(void)
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0; i<n; i++)
    {
      cin>>A[i];
    }

    sort(A+0,A+n);

    for(int i=0; i<n; i++)
    {
      std::cout << A[i] << '\n';
    }

    return 0;
}
