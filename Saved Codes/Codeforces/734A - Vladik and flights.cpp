#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
        int n;
        cin>> n;
        int a,b;
        cin>> a>> b;
        string S;
        cin>> S;
        int ans=0;
        if (S[a-1]!=S[b-1])
        {
            ans = 1;
        }

        std::cout << ans<<endl;

    return 0;
}
