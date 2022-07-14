#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int N;
    std::cin >> N;
    long long x = N*(N+1)/2;
    int M;
    std::cin >> M;
    long long A[M];
    while (M--)
    {
        std::cin >> A[M];
        x -= A[M];
    }
    std::cout << x << '\n';

    return 0;
}
