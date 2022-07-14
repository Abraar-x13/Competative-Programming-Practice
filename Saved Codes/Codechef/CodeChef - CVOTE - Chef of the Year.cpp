#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FAAST std::ios::sync_with_stdio(false); cin.tie(NULL);
#define RFFF return false;
#define RTTT return true;
#define pb(a) push_back(a);
#define debug cout <<"hehe\n"
#define debug1(x) cout <<"hehe " << x << " hehe\n"
#define debug2(x,y) cout <<"hehe " << x <<" : "<< y <<" #\n"
const ll N=1e9+2;
#define pii pair<int,int>


int main(void) 
{
   FAAST;
   int TC; TC = 1; // cin >> TC;
   for (int tc = 0; tc < TC; tc++)
   {
      int n,m;
      cin>> n >> m;
      string chefname,countryname;
      map<string, pair<string,int>>mp;
      map<string, int>mp1; map<string,int>::iterator it;

      for(int i = 0;i < n;i++)
      {
         cin >> chefname >> countryname;
         mp[chefname] = {countryname,0};
      }
      for(int i=0;i<m;i++)
      {
         string s;
         cin>>s;
         mp1[mp[s].first]++;
         mp[s].second++;
      }
      
      int country=-1,chef=-1;
      string countryans,chefans;
      for(it=mp1.begin();it!=mp1.end();it++)
      {   
         if(it->second>country)
         {
            countryans=it->first; 
            country=it->second;
         }
      }
      map<string,pair<string,int>>::iterator it1;
      for(it1=mp.begin();it1!=mp.end();it1++)
      {
         if(it1->second.second>chef)
         {
            chefans=it1->first;
            chef=it1->second.second;
         }
      }
      cout<<countryans<<"\n"<<chefans<<"\n";
   }
   return 0;
}