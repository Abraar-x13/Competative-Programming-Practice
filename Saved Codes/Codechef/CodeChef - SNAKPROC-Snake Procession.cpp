#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <iomanip>
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
	int TC;
	cin>>TC;
    for (int tc = 0; tc < TC; tc++)
    {
        // H, No two cons H or T,T
        char C[500];
        int n;
    	cin>>n;
        string s;
        cin>>s;

    	bool flag = true;
        int k = 0;
    	for(int i = 0; i<n; i++)
        {
    		if(s[i]=='H' || s[i]=='T')
            {
                C[k]= s[i];
                k++;
            }
    	}
    	if(k%2==0)
        {
    		for(int i=0; i<k; i++)
            {
                if (( i%2==1 && C[i]=='H' ) || ( i%2==0 && C[i]=='T' )) {
                    flag = false;
                    break;
                }
    		}
    	}
    	else flag = false;

        (!flag)? std::cout << "Invalid" << '\n'
               : std::cout << "Valid" << '\n';
    }

    return 0;
}
