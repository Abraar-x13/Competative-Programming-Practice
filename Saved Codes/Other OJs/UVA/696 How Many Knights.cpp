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
   // int TC; TC = 1; // cin >> TC;
   // for (int tc = 0; tc < TC; tc++)
   // {
   //    continue;
   // }

   // IDEA : 
   // 1 x N or M x 1 - ooooooooooo
   // 2 x N or M x 2 -
   //                ooxxooxxo......
   //                ooxxooxxo......
   // General Case - (3*9 for ex)
   //                oxoxoxoxo
   //                xoxoxoxox
   //                oxoxoxoxo

   int M, N;
   while (scanf("%d%d", &M, &N) && (M || N))
   {
      int a = min(M, N), b = max(M, N), ans;

      if (a == 1) { ans = b; }
      else if (a == 2)
      {
         int c = b % 4;
         if (c)
         {
            ans = (b / 4) * 4 + (c > 1 ? 4 : 2);   
         }
         else { ans = (b / 4) * 4; }
      }
      else
      { ans = (a * b + 1) / 2; }
      printf("%d knights may be placed on a %d row %d column board.\n", ans, M, N);
   }
   return 0;
}

