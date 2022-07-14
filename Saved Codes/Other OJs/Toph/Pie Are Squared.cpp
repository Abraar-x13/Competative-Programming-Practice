#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void)
{
    float r;
    std::cin >> r;
    float pi = acos(-1);
    float Area = pi*r*r;
    std::cout << Area << '\n';

    return 0;
}
