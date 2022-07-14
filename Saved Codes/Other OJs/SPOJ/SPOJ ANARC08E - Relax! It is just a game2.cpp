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

long fact(long num);
void simulation(void);

int main(void)
{
    int a,b;
    do
    {
        cin >>a>>b;
        if ((a==-1 && b==-1))
        {
            break;
        }
        if (a==1 || b==1)
        {
            std::cout << a<<"+"<<b<<"="<<a+b << '\n';
        }
        else
        {
            std::cout << a<<"+"<<b<<"!="<<a+b << '\n';
        }
    }
    while(!(a==-1 && b==-1));
    return 0;
}

long fact(long num)
{
    long f = 1;
    for (int i = 1; i <= num; i++)
    {
        f=f*i;
    }
    return f;
}

void simulation(void)
{
    int a,b;
    for (size_t a = 0; a < 11; a++)
    {
        for (size_t b = 0; b < 11; b++)
        {
            if (a+b == (fact((long)(a+b))/(fact((long)(a))*fact((long)(b)))))
            {
                std::cout << a<<"+"<<b<<"="<<a+b << '\n';
            }
        }
    }
}
