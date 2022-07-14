#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <iomanip>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

long long count_digit(long long number)
{
   return (log10(number) + 1);
}

int main(void)
{
    long long K;
    long long A, B;
    std::cin >> K >> A >> B;
    long long Ad = count_digit(A); long long Bd = count_digit(B);

    long long Asum = 0;
    for (long long i = 0; i < Ad; i++)
    {
        Asum += (A%10)*pow(K,i);
        A = A/10;
    }

    long long Bsum = 0;
    for (long long i = 0; i < Bd; i++)
    {
        Bsum += (B%10)*pow(K,i);
        B = B/10;
    }

    std::cout << Asum*Bsum << '\n';

    return 0;
}
