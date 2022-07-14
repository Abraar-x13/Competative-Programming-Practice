#include <cctype>
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;


int main(void)
{
    std::string A;
    std::cin >> A;
    int len = A.length();

    putchar(toupper(A[0]));
    for (int i = 1; i < len; i++)
    {
        if (A[i]=='s') { std::cout << "$"; }
        else if (A[i]=='i') { std::cout << "!"; }
        else if (A[i]=='o') { std::cout << "()"; }
        else { std::cout << A[i]; }
    }
    std::cout << "." << '\n';


    return 0;
}
