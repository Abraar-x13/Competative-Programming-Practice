#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(void)
{
	int N,H;
    std::cin >> N>>H;
    int A[N];

    for (int i=0; i<N; i++) { std::cin >> A[i]; }

    int wid=0;
    for (int i=0; i<N; i++)
    {
        if (A[i]<=H) {
            wid++;
        }
        else wid+=2;
    }

    std::cout << wid << '\n';

	return 0;
}
