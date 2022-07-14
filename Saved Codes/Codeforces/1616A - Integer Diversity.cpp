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
      set<int> s1;
      for (int i = 0; i < n; i++)
      {
         int p; cin >> p;
         if (s1.count(p)==0)
         {
            s1.insert(p);
         }
         else if (s1.count(-p)==0)
         {
            s1.insert(-p);
         }
      }
      // set<int>::iterator itr;
      // for (itr = s1.begin(); itr != s1.end(); itr++) 
      // {
      //   cout << *itr << " ";
      // }
      cout << s1.size() << "\n";  
   }
   return 0;
}