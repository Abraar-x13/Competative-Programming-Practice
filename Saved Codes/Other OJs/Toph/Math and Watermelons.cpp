#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{

    int M,K;
    std::cin >> M>>K;

    int X = M%K;

    std::cout << X << '\n';

    return 0;
}
