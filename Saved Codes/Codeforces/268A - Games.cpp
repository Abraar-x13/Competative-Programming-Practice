#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void)
{

    int games,change=0;
    cin>>games;
    int a[games],b[games];

    int i,j;
    for ( i=0; i<games; i++) { cin>>a[i]>>b[i]; }

    for (i=0; i<games; i++ )
    {
        for( j=0; j<games; j++) { if ( i!=j && a[i]==b[j] ) change++; }
    }

    cout<<change<<endl;

    return 0;


 }
