#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void fast(void); 


int main(void) 
{
   fast();

   int n; cin >> n;
   vector<bool> prime(n+5, true);

   for (int i = 2; i*i <= n; i++) 
   {
      if(prime[i])
      {
         for (int j = i*i; j <= n; j+=i) 
         {
            prime[j] = false;
         }
      }
   }

   for (int i = 2; i <= n; i++) 
   {
      if (prime[i])
      {
         std::cout << i << " ";
      }
   }
   
   return 0;
}


void fast(void) 
{
   std::ios::sync_with_stdio(false); 
   cin.tie(NULL);
}