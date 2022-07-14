#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int N;
    std::cin >> N;
    int b,c;
    b = N+1;
    c= (2*N)+1;

    long long x = (N*b*c)/6;
    std::cout << x << '\n';

    return 0;
}
