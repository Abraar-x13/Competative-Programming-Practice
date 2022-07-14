#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void fast(void); 


int main(void) 
{
   fast();

   int TC; cin >> TC;
   for (int tc = 0; tc < TC; tc++)
   {
      int n; cin>>n;
      cout<<"3";
      for(int i=0;i<n-2;i++)
      {
         cout<<"0";
      }
      if(n!=1) cout<<"3";
      cout<<endl;
   }

   return 0;
}


void fast(void) 
{
   std::ios::sync_with_stdio(false); 
   cin.tie(NULL);
}