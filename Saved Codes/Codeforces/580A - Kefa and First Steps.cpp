#include <iostream>
using namespace std;

int main()
{
    int n, length=1, max_length=1;
    std::cin >> n;
    int a[n];

    for (int i=0; i<n; i++)
    {
        std:cin >> a[i];
        if (i > 0)
        {
            if (a[i] >= a[i - 1])
            {
                length++;
                max_length = max(max_length, length);
            }
            else { length = 1; }
        }
    }

    cout << max_length << endl;
    return 0;
}
