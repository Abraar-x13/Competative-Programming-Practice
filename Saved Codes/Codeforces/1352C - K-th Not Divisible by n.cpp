#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FAAST std::ios::sync_with_stdio(false); cin.tie(NULL);
#define RFFF return false;
#define RTTT return true;
const int N=1e5+2;

int ans(int N, int K);


int main(void) 
{
   FAAST;
   int TC; // TC = 1; 
   cin >> TC;
   for (int tc = 0; tc < TC; tc++)
   {
      int N; cin >> N;
      int K; cin >> K;
      int x = floor((K-1)/(N-1)) + K;
      cout << x <<"\n";
   }
   return 0;
}

