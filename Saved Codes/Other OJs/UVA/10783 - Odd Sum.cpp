#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FAAST std::ios::sync_with_stdio(false); cin.tie(NULL);
#define RFFF return false;
#define RTTT return true;
const int N=1e5+2;

int sumOdd(int n)
{
    int terms = (n + 1) / 2;
    int sum = terms * terms;
    return sum;
}
 
int suminRange(int l, int r)
{
    return sumOdd(r) - sumOdd(l - 1);
}


int main(void) 
{
   FAAST;
   int TC; TC = 1; 
   cin >> TC;
   for (int tc = 0; tc < TC; tc++)
   {
      int a, b;
      cin >> a >> b;
      cout << "Case "<<tc+1<<": "<< suminRange(a,b) << "\n";

   }
   return 0;
}

