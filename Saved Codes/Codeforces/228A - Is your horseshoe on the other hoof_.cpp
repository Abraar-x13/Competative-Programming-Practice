#include <bits/stdc++.h>
using namespace std;
 
int main(void)
{
    int s[4],Buy=0;
    for(int i=0; i<4; i++) { std::cin >> s[i]; }
 
    sort(s+0,s+4);
 
    for(int i=0; i<3; i++)
    {
        if(s[i]==s[i+1]){ Buy++;}
    }
    std::cout << Buy << '\n';
    return 0;
}
