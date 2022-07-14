#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    string A;

    while (cin >> A)
    {
        int len = A.length();
        for (int i=0; i<len; i++)
        {
            if ( (len-i)%3==0 && i>0 ) { cout << ","; }
            cout << A[i];
        }
        cout << endl;
    }

    return 0;
}
