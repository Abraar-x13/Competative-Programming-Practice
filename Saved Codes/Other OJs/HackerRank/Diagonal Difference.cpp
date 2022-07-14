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
    int N;
    cin >> N;
    int input, leftD=0, rightD=0;
    for(int j = 0; j < N; j++)
    {
        for(int k = 0; k < N; k++)
        {
            cin >> input;
            if(j == k)
            {
                leftD += input;
            }
            if(j+k == (N-1))
            {
                rightD += input;
            }
        }
    }
    cout << abs(leftD-rightD);

    return 0;
}
