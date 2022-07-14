#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FAAST std::ios::sync_with_stdio(false); cin.tie(NULL);
#define RFFF return false;
#define RTTT return true;
const ll N=1e5+2;


int main(void) 
{
   FAAST;
   int TC; cin >> TC; //TC = 1; 
   for (int tc = 0; tc < TC; tc++)
   {
      int N; cin >> N;
      int K; cin >> K;
      int sum = 0;
      for (int i = 1; i <= sqrt(N); i++)
      {
         if (N%i == 0)
         {
            if (i%K != 0) { sum += i; }
            if ((N/i)%K != 0 && i*i!=N) { sum += N/i; }
         }
      }
      cout << sum << "\n";
   }
   return 0;
}