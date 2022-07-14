#include <iostream>
using namespace std;

int main(void)
{
    int N;
    std::cin >> N;
    
    while(N--)
    {
        double P;
        std::cin >> P;
        double x = (P/4)*(P/4);
        std::cout << x << '\n';
    }

    return 0;
}
