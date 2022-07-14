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
    int a,b,n;
    cin>>a>>b>>n;
    bool flag=false;
    int num=a;
    for(int i=0;i<=9;i++)
    {
        num=10*a+i;
        if(num%b==0)
        {
            flag=true;
            break;
        }
    }
    if(!flag)
    {
        cout<<-1<<endl;
        return 0;
    }
    cout<<num;
    for(int i=1;i<n;i++)
    {
        cout<<0;
    }
    cout<<endl;
    return 0;
}
