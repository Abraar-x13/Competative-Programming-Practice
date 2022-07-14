#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    string A;
    cin>>A;
    string B = A;
    reverse(A.begin(), A.end());

    if(A==B) { cout<<"Yes"; }
    else { cout<<"No"; }

    return 0;
}
