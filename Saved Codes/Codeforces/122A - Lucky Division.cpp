#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(void)
{
	int n;
    std::cin >> n;

    // n <= 1000 so tin digit number nilei hobe.

    if ( n%4==0 ) { std::cout << "YES" << '\n'; }
    else if ( n%7==0 ) { std::cout << "YES" << '\n'; }
    else if ( n%47==0 ) { std::cout << "YES" << '\n'; }
    else if ( n%74==0 ) { std::cout << "YES" << '\n'; }
    else if ( n%444==0 ) { std::cout << "YES" << '\n'; }
    else if ( n%447==0 ) { std::cout << "YES" << '\n'; }
    else if ( n%474==0 ) { std::cout << "YES" << '\n'; }
    else if ( n%477==0 ) { std::cout << "YES" << '\n'; }
    else if ( n%777==0 ) { std::cout << "YES" << '\n'; }
    else { std::cout << "NO" << '\n'; }

	return 0;
}
