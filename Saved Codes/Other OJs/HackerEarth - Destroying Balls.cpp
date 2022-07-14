#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FAAST std::ios::sync_with_stdio(false); cin.tie(NULL);
#define RFFF return false;
#define RTTT return true;
#define pb push_back
const int N=1e5+2;


int main(void) 
{
   FAAST;
   int TC; // TC = 1; // 
   cin >> TC;
   for (int tc = 0; tc < TC; tc++)
   {
      int n, arr[1000]; cin>>n;
      for(int i=0;i<n;i++) { cin>>arr[i]; } sort(arr,arr+n);
      
      int flag;
      while(n)
      {
         flag=1;
         int sz=n;
         int count=0;
         for(int i=n-1;i>=0;i--)
         {
         
            if(arr[n-1]!=sz)
            {
               flag=1;
               cout<<"NO"<<endl;
               break;
            
            }
            if(arr[i]==sz)
            {
               flag=0;
               count++;
            }
         
         }
         if(flag==1) { break; }
         if(flag==0) { n = n-count; }
      }
      if(flag==0) { cout<<"YES"<<endl; }
   }
   return 0;
}