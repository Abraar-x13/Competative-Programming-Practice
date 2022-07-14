#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int T;
    std::cin >> T;
    for (int i=0; i<T; i++)
    {
        int n;
        std::cin >> n;
        long long x = (n*(n*n+1)/2) ;
        std::cout << "Case " <<i+1<<": "<< x<< '\n';
    }
    return 0;
}
