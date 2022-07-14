#include <iostream>
using namespace std;

int main(void)
{
    int T;
    std::cin >> T;

    while (T--)
    {
        int N;
        std::cin >> N;
        std::cout << 6*N <<" "<<N << '\n';
    }

    return 0;
}
