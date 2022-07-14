#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FAAST std::ios::sync_with_stdio(false); cin.tie(NULL);
#define RFFF return false;
#define RTTT return true;
#define pb push_back
const int N=1e5+2;

bool solve(int a, int b, int c);
bool comp(int a, int b, int c, int d);

int main(void) 
{
   FAAST;
   int TC; // TC = 1; // 
   cin >> TC;
   for (int tc = 0; tc < TC; tc++)
   {
      int a; cin >> a;
      int b; cin >> b;
      int c; cin >> c;
      if (a == b && c%2==0)
      {
         cout << "YES\n"; continue;
      }
      if (a == c && b%2==0)
      {
         cout << "YES\n"; continue;
      }
      if (b == c && a%2==0)
      {
         cout << "YES\n"; continue;
      }
      if (a + c == b)
      {
         cout << "YES\n"; continue;
      }
      if (a + b == c)
      {
         cout << "YES\n"; continue;
      }
      if (b + c == a)
      {
         cout << "YES\n"; continue;
      }
      cout << "NO\n";
   }
   return 0;
}


bool comp(int a, int b, int c, int d)
{
   if (a==b && c==d) { RTTT; }
   else if (a==c && b==d) { RTTT; }
   else if (a==d && c==b) { RTTT; }
   else RFFF;
}


bool solve(int a, int b, int c)
{
   for (int i = 1; i < a; i++)
   {
      if (comp(i, b, c, a-i)) 
      {
         cout << "YES\n"; return 0;
      }
   }
   for (int i = 1; i < b; i++)
   {
      if (comp(i, a, c, b-i)) 
      {
         cout << "YES\n"; return 0;
      }
   }
   for (int i = 1; i < c; i++)
   {
      if (comp(i, b, a, c-i)) 
      {
         cout << "YES\n"; return 0;
      }
   }
   cout << "NO\n"; return 0;
}

