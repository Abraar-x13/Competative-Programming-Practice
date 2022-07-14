#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
    int T;
    std::cin >> T;

    while (T--)
    {
        int u;
        std::cin >> u;
    	std::cout << abs(u) << '\n';
    }

    return 0;
}
