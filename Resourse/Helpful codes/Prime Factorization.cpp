#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void printPrimeFactors(int n);

int main(void) 
{

    int n; cin >> n;
    printPrimeFactors(n);

    return 0;
}


void printPrimeFactors(int n) 
{
   while (n%2 == 0)
   {
      cout<<"2\t";
      n = n/2;
   }
   for (int i = 2; i*i <= n; i = i+2)
   {
      while (n%i == 0)
      {
         cout<<i<<"\t";
         n = n/i;
      }
   }
   if (n > 2) cout<<n<<"\t";
}
