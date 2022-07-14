#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void)
{
    int n;
    std::cin >> n;
    int flag;

    if (n%4==0 && n%400!=0)
    {
        std::cout << "Yes" << '\n';
    }
    else { std::cout << "No" << '\n'; }
    return 0;
}
