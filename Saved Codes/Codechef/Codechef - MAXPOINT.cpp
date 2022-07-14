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
       int a,b,c;
       int x,y,z;
       cin>>a>>b>>c;
       cin>>x>>y>>z;
       int t=240;
       int p=0;
       for(int i=0;i<=20;i++)
       {
           for(int j=0;j<=20;j++)
           {
               for(int k=0;k<=20;k++)
               {
                   int tmp=i*a + j*b +k*c;
                   if(tmp<=240)
                   {
                       p=max(p,i*x + j*y + k*z);
                   }
               }
           }
       }
       cout<<p<<endl;
   }

   return 0;
}


void fast(void) 
{
   std::ios::sync_with_stdio(false); 
   cin.tie(NULL);
}