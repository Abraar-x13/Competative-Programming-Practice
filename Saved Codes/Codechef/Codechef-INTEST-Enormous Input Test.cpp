#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void fast(void); 

int main(void) 
{
   fast();
   int n,k;
   cin >> n>> k;
   int count = 0; int pp;
   for (int i=0; i<n; i++)
   {
   cin >> pp;
   if (pp%k==0) { count++; }
   }
   cout << count;

   return 0;
}

void fast(void) 
{
   std::ios::sync_with_stdio(false); 
   cin.tie(NULL);
}