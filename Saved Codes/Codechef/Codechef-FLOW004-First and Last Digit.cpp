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
      int pp = (int)n[0]-'0'+ (int)n[n.size()-1]-'0';
      cout<<pp<<"\n";
   }
   return 0;
}

void fast(void) 
{
   std::ios::sync_with_stdio(false); 
   cin.tie(NULL);
}