#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std;

const int INF = int(2e9) + 99;
int gapBetweenPages(int x, int y, int d);

int main(void)
{
	int n, x, y, d;
	int testCase;
	cin >> testCase;
	for(int i=0; i<testCase; i++)
	{
    	cin >> n >> x >> y >> d;

    	int xyDiff = abs(x-y);
    	int ans = INF;

    	if(xyDiff%d == 0) { ans = min(ans, gapBetweenPages(x, y, d)); }

    	xyDiff = y-1;
    	if(xyDiff%d == 0)
		{ ans = min(ans, gapBetweenPages(x, 1, d) + gapBetweenPages(1, y, d)); }

    	xyDiff = n-y;
    	if(xyDiff%d == 0)
    	{ ans = min(ans, gapBetweenPages(x, n, d) + gapBetweenPages(n, y, d)); }

    	if(ans == INF) { ans = -1; }

    	cout << ans << endl;
	}
	return 0;
}


int gapBetweenPages(int x, int y, int d)
{ return (abs(x - y) + (d - 1)) / d; }
