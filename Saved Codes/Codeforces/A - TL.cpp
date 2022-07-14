#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(void)
{

   int p, n, min;
   cin>>p>>n;
   int a[p], b[n];
   for(int i=0; i<p; i++) { cin>>a[i]; } sort(a, a+p);
   for(int i=0; i<n; i++) { cin>>b[i]; } sort(b, b+n);

   min= 2* a[0];
   if(min < a[p-1]) { min = a[p-1]; }

   if(min >= b[0]) { cout<<"-1"<<endl; }
   else cout<<min<<endl;

   return 0;
}
