#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FAAST std::ios::sync_with_stdio(false); cin.tie(NULL);
#define RFFF return false;
#define RTTT return true;
const int N=1e5+2;

int lenghth_of(int x);

int main(void) 
{
   FAAST;
   // int TC; TC = 1; // cin >> TC;
   // for (int tc = 0; tc < TC; tc++)
   // {
   //    continue;
   // }

   // SHould i sonme sorta dp for optimization?
   int a, b;
   while (cin >> a && cin >>b)
   {
      int mn = min(a,b);
      int mx = max(a,b);
      int maxlen = 0;
      for (int i = mn; i <= mx; i++)
      {
         int i_len = lenghth_of(i);
         if (i_len>maxlen)
         {
            maxlen = i_len;
         }
      }
      cout <<a<<" "<<b<< " "<< maxlen<<"\n";
   }
   return 0;
}

int lenghth_of(int x)
{
   int count = 1;
   while(x!=1)
   {
      count++;
      if (x%2==0) { x = x/2; }
      else { x = 3*x+1; }
   }
   return count;
}

