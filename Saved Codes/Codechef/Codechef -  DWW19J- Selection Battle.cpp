#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool is_prime(ll n);

int main(void) 
{
    ll TC;
    cin>>TC;
    for(int tc=0; tc<TC; tc++)
    {
        ll n;
        cin>>n;

        is_prime(n) ? cout<<"Divesh"<<endl
                    : cout<<"Tanya"<<endl;
    }
}

bool is_prime(ll n)
{
    for(ll i=2; i*i<=n; i++)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }
    return 1;
}