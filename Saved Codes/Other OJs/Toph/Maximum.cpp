#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void)
{
    int n;
    std::cin >> n;
    int A[n];
    int max = -2147483648;
    for (int i = 0; i < n; i++)
    {
        std::cin >> A[i];
        if (A[i]>max) { max = A[i]; }
    }
    std::cout << max << '\n';
    return 0;
}
