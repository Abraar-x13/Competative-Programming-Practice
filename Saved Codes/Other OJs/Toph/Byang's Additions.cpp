#include<iostream>
using namespace std;

int main(void)
{
    int A,B;
    std::cin >> A>>B;
    int n= min(A,B);

    for (int i = 0; i < n; i++)
    {
        int add = ((A%10) + (B%10)) ;
        if (add > 9)
        {
            std::cout << "Yes" << '\n';
            return 0;
        }
        A/=10;
        B/=10;
    }
    std::cout << "No" << '\n';
    return 0;
}
