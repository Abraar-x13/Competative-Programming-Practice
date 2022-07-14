#include <iostream>
using namespace std;

int main(void)
{
    int N;
    std::cin >> N;
    float sum = 0;
    float avg;
    float A[N];
    
    for (int i=1; i<=N; i++) 
    {
        std::cin >> A[i];
        sum += A[i];
        avg = sum/i;
        std::cout << avg << '\n';
    }

    return 0;
}
