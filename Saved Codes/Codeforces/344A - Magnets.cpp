#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int magnets[n], group=1;
    int i;
    for (i=0; i<n; i++)
    {
      cin >> magnets[i];
    }
    for (i=0; i<n-1; i++)
    {
        if (magnets[i] != magnets[i+1]) { group+=1; }
    }
    cout << group << '\n';
    return 0;
}
