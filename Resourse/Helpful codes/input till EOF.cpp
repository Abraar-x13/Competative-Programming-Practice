#include <iostream>
using namespace std;
...
// numbers
int n;
while (cin >> n)
{
   ...
}
// lines
string line;
while (getline(cin, line))
{
   ...
}
// characters
char c;
while (cin.get(c))
{
   ...
}


// OTHER METHOD :
int main() 
{
   // v = u + at
   // d = ut + .5 a t^2

   int v1, t1;
   while(scanf("%d %d", &v1, &t1) != EOF){
      printf("%d\n",2*v1*t1);
   }

   return 0;
}