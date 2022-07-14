#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    long long n, sum;
    cin >> n;

    if(n%2 == 0) { sum=n/2; }
    else { sum = ((n+1)/2)*(-1); }

    cout << sum << endl;
    
    return 0;
}
