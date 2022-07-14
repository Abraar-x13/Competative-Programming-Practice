#include <iostream>
using namespace std;

int main(void)
{
    int N;
    std::cin >> N;
    int max,x;

    for (int i=1; i<=N; i++)
    {
        if (i==1) { max = i+(N/i); }
        if(N%i==0)
        {
            x = i+(N/i);
            if (x>max) { max = x; }
        }
    }
    std::cout << max << '\n';

    return 0;
}
