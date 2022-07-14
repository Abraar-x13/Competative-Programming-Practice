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
        int n;
        cin >> n;
        int pp[100000];

        for (int i = 0; i < n; i++)
        {
            cin >> pp[i];
        }

        int count =0;
        for (int i = 0; i < n; i++)
        {
            if (pp[i] > pp[(i+1)%n])
            {
                count++;
            }
        }

        (count <= 1)? std::cout << "YES" << '\n'
                    : std::cout << "NO" << '\n';

    }

    return 0;
}


// NOTE :
/*
https://stackoverflow.com/questions/31084589/how-to-check-if-an-int-array-is-a-circularly-sorted-array


You can loop through the array and check that all values are
increasing. And as soon as you hit the first value that is
not increasing, check that it and all of the following values
are increasing AND less than or equal to the first element in
the array.

Edit:

I feel that people are discounting Daniel's solution because
they don't understand it or think it is broken. This is sad
because I think his solution is brilliant.

For a little bit of explanation. To check if a list is
circular-sorted, my original answer said you needed to check
there was one or less "break" from being completely sorted AND
all of the numbers after the "break" were less than the first
number in the array. However as Daniel's answer shows,
you don't need to check ALL numbers after the "break",
only the last number (which also happens to be the
biggest/maximum number after the break because they are sorted).
There should always be one break, unless the list is
filled with the same numbers in which case there would
be no breaks and count would be 0.
*/
