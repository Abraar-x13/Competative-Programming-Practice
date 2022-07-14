#include <bits/stdc++.h>
#include <cmath>
using namespace std;


int main(void)
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int n;
    std::cin >> n;
    int A[n];
    int B[n];

    for (int i=0; i<n; i++)
    {
        std::cin >> A[i];
        B[i]=A[i];
    }
    sort(B+0,B+n);

    for (int j=0; j<n; j++)
    {
        if (B[j]!=A[j])
        {
            std::cout << "No" << '\n';
            return 0;
        }
    }
    std::cout << "Yes" << '\n';
    return 0;
}
