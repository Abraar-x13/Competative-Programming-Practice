#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void fast(void); 

ll counntt(ll A[], ll size);

int main(void) 
{
    fast();
    int TC; cin >> TC; // TC = 1
    for (int tc = 0; tc < TC; tc++)
    {
        ll A[100001];
        ll n; cin >> n;
        for (ll i = 0; i < n; ++i)
        {
            cin >> A[i];
        }
        cout << counntt(A, n)<< "\n";
    }
    return 0;
}


void fast(void) 
{
   std::ios::sync_with_stdio(false); 
   cin.tie(NULL);
}


ll counntt(ll a[], ll n)
{   
    if(n==1) { return 1 ; }
    ll count = 0 ; ll L = 0; 
    for(ll i=1 ; i<n ; i++)
    {
        if(a[i]>=a[i-1]) { L++; }
        else { L = 0 ; }
        count += L ; 
    }
    count += n ;
    return count; 
}