#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FAAST std::ios::sync_with_stdio(false); cin.tie(NULL);
#define RFFF return false;
#define RTTT return true;
#define pb push_back
const int N=1e5+2;

int main(void) 
{
   FAAST;
   int TC; TC = 1; // cin >> TC;
   for (int tc = 0; tc < TC; tc++)
   {
      int n; cin >> n;
      int clouds[1000];
      for (int i = 0; i < n; i++)
      {
         cin >> clouds[i];
      }
      int jumps = -1;
      for (int i = 0; i < n; i++, jumps++) 
      {
         if (i<n-2 && clouds[i+2]==0) i++;
      }
      // the loop means: keeps jumping from the i-th cloud 
      // between 0 and n-1, to (1) if there are two spaces 
      // left at least and if the two cloud down happens 
      //to be an ordinary cloud, jumps two space (2) if 
      // not, just jump one space
      cout << jumps;
   }
   return 0;
}

