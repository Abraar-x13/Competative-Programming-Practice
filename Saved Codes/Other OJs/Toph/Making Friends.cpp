#include <iostream>
using namespace std;

int main(void)
{
    int N;
    std::cin >> N;
    int count = 0;
    for (int i=1; i<N; i++)
    {
        if (N%i==0) { count += 1; }
    }
    std::cout << count << '\n';

    return 0;
}
