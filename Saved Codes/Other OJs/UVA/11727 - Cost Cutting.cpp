#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FAAST std::ios::sync_with_stdio(false); cin.tie(NULL);
#define RFFF return false;
#define RTTT return true;
const int N=1e5+2;


int main(void) 
{
   FAAST;
   int TC; TC = 1; 
   cin >> TC;
   for (int tc = 0; tc < TC; tc++)
   {
      int a, b, c;
      cin >> a >> b >> c;
      int x = a+b+c - max(max(a,b),c) - min(min(a,b),c);

      cout << "Case "<< tc+1<< ": "<<x<<"\n";
   }
   return 0;
}

