#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void fast(void); 

int main(void) 
{
   fast();

   int TC; 
   cin >> TC;
   for (int tc = 0; tc < TC; tc++)
   {
      int a,b;
      cin >> a>> b;
      cout << a%b << "\n";
   }

   return 0;
}

void fast(void) 
{
   std::ios::sync_with_stdio(false); 
   cin.tie(NULL);
}