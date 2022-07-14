#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void) 
{

    double x,y;
    cin >> x >>y ;

    std::cout << std::fixed << std::showpoint;
    if ((int)x%5!=0)
    {
       cout << std::setprecision(2) << y; return 0;
    }

    if (x+0.50>y)
    {
       cout << std::setprecision(2) << y; return 0;
    }
    else
    {
      cout << std::setprecision(2) << y-0.50-x;
    }


    return 0;
}
