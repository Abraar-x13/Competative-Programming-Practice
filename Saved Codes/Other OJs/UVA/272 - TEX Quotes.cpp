#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FAAST std::ios::sync_with_stdio(false); cin.tie(NULL);
#define RFFF return false;
#define RTTT return true;
const int N=1e5+2;


int main(void) 
{
   FAAST;
   // int TC; TC = 1; // cin >> TC;
   // for (int tc = 0; tc < TC; tc++)
   // {
   //    continue;
   // }

   string temp;
   bool isFirst(true);

   while (getline(cin, temp))
   {
      for (string::iterator iter = temp.begin(); iter != temp.end(); ++iter)
      {
         if (*iter == '"')
         {
            if (isFirst) { cout << "``"; }
            else { cout << "''"; }
            isFirst = (!isFirst);            
         }
         else
         {
            cout << *iter;
         }
      }
      cout << '\n';
   }
    
      
   return 0;
}

