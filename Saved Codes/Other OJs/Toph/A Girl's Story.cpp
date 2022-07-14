#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
//X year earlier Raju’s age was one-half of Meena’s age.
//Currently,Meena is Y years old. 
//Now Meena wants to know the current age of Raju.

    int X,Y;
    std::cin >> X>>Y;

    int R = (Y-X)/2 + X;

    std::cout << R << '\n';

    return 0;
}
