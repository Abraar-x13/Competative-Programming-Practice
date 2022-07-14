#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int X,Y;
    std::cin >> X>>Y;
    int c = ((Y/X)+1);
    int k = (X*c-Y);
    std::cout << k << '\n';
    
    return 0;
}
