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
   int TC; // TC = 1; // 
   cin >> TC;
   for (int tc = 0; tc < TC; tc++)
   {
      int n; cin >> n;
      int rooks; cin >> rooks;

      int count = 0;

      for (int i = 0; i < n; i++)
      {
         for (int j = 0; j < n; j++)
         {
            if (i == j && i%2==0)
            {
               count += 1;
            }
         }
      }

      if (count >= rooks)
      {
         int r_left = rooks;
         for (int i = 0; i < n; i++)
         {
            for (int j = 0; j < n; j++)
            {
               if (r_left>0)
               {
                  if (i == j && i%2==0)
                  {
                     cout << "R";
                     r_left -= 1;
                  }
                  else cout << ".";
               }
               else cout << ".";
            }
            cout << "\n";
         }
      }
      else cout << "-1\n";
      //cout << "\n";
   }
   return 0;
}