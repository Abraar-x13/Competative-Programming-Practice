#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void fast(void); 

int main(void) 
{
   fast();
   int TC; cin >> TC; //TC = 1;
   for (int tc = 0; tc<TC; tc++)
   {
      string n;
      cin>>n;
      int count =0;
      for(int x=0; x<n.length(); x++)
      {
         if(n[x]=='4') { count++; }
      }
      cout<<count<<"\n";
   }
   return 0;
}

void fast(void) 
{
   std::ios::sync_with_stdio(false); 
   cin.tie(NULL);
}