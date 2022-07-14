#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void fast(void); 

int main(void) 
{
   fast();

   int n;
   cin>>n;
   int pp;
   int c1=0,c2=0,c3=0;
   for (int i = 0; i < n; i++)
   {
      cin>>pp;
      switch(pp) 
      {
         case 1 :
            c1++;
            break;
         case 2 :
            c2++;
            break;
         case 3 :
            c3++;
            break;
      }
   }
   cout<< n-max(c1,max(c2,c3));
   return 0;
}

void fast(void) 
{
   std::ios::sync_with_stdio(false); 
   cin.tie(NULL);
}