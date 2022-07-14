#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int T;
    std::cin >> T;
    while (T--) 
    {
        int N;
        double K;
        std::cin >> N>>K;
        double total = N*K;
        double P[N];
        double sum =0;
        for (int i=0; i<N; i++)
        {
            std::cin >> P[i];
            sum += P[i];
        }
        double need = total - sum;
        
        double l = need / K;
        int xyz = ceil(l);
        std::cout << xyz << '\n';
    }

    return 0;
}
