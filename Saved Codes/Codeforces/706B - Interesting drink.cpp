#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FAAST std::ios::sync_with_stdio(false); cin.tie(NULL);
const ll N=1e5+2;
int X[N];
int M[N];

int main(void) 
{
   FAAST;
   int TC; TC = 1; //cin >> TC;
   for (int tc = 0; tc < TC; tc++)
   {
      int n;
      cin >> n;
      int sum = 0;
      for (int i = 0; i < n; i++)
      {
         cin >> X[i];
      }
      std::vector<int> v(X,X+n);   
      std::sort (v.begin(), v.end());
      std::vector<int>::iterator up;

      int q;
      cin >> q;
      for (int i = 0; i < q; i++)
      {
         cin >> M[i];
         up= std::upper_bound (v.begin(), v.end(), M[i]);
         std::cout << (up - v.begin()) << '\n';
      }


   }
   return 0;
}

