#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main(void)
{
    int n,eights=0;
    string A;
    cin>>n>>A;

    int x = n;
    while(x--) { if( A[x]=='8' ) { eights++; } }

    if( eights>=n/11 ) { cout<<n/11<<endl; }
    else if( eights<n/11 && n>11 ) { cout<<eights<<endl; }
    else{ cout<<0<<endl; }

    return 0;
}
