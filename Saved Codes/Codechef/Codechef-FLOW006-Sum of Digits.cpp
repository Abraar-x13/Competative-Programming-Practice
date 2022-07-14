#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void fast(void); 

int main(void) 
{
   // fast();

   int TC; 
   cin >> TC;
   for (int tc = 0; tc < TC; tc++)
   {
      int a;
      cin >> a;
      int times = 0;
      while(a)
      {
         times += a%10;
         a /= 10;
      }
      cout << times<<"\n";
      times = 0;
   }

   return 0;
}

// void fast(void) 
// {
//    std::ios::sync_with_stdio(false); 
//    cin.tie(NULL);
// }