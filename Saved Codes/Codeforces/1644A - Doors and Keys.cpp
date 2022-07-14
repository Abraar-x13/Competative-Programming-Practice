#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int TC; cin >> TC;
    for(int tc = 0; tc < TC; tc++)
    {
        bool f1 = false;
        bool f2 = false;
        bool f3 = false;
        string s; cin >> s;
        for(int i = 0; i < 6; i++)
        {
            for(int j = i; j < 6; j++)
            {
                if (s[i] == 'r' && s[j] == 'R')
                {
                    f1 = true;
                }
                if (s[i] == 'g' && s[j] == 'G')
                {
                    f2 = true;
                }
                if (s[i] == 'b' && s[j] == 'B')
                {
                    f3 = true;
                }
            }
        }
        if (f1 && f2 && f3)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }           
    }
    return 0;
}
