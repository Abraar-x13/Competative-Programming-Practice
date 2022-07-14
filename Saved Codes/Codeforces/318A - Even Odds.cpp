#include <iostream>
using namespace std;

int main(void)
{
    unsigned  long  long n,k;
    std::cin >> n;
    std::cin >> k;
    unsigned  long  long num;
    unsigned  long  long mid = n/2 ;
    if (n%2 != 0) { mid = mid+1; }

    if ( mid>=k ) { num = 2*(k-1) +1 ; }
    else
    {
        k = k - mid;
        num= 2*k;
    }
    std::cout << num << '\n';




    return 0;
}
