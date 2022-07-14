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

int fact(int num);


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
        if (a+b == (fact(a+b)/(fact(a)*fact(b))))
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

int fact(int num)
{
    int f =1;
    for (int i = 1; i <= num; i++)
    {
        f=f*i;
    }
    return f;
}
