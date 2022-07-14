//from contest 722 div 2 A
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int T;
    std::cin >> T;
    while (T--) 
    {
        int n;
        std::cin >> n;
        int A[n];
        for (int i=0; i<n; i++) { std::cin >> A[i]; }

        sort(A+0,A+n);
        int count = 0;

        for (int i=0; i<(n-1); i++)
        {
            int Avg = (A[i]+A[i+1])/2 ;
            if (A[i+1]>Avg)
            {
                count += 1;
                A[i+1]=A[i];
            }
        }
        std::cout << count << '\n';
    }
    return 0;
}
