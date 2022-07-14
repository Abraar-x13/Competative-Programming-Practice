#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int A[n];
    for (int i=0; i<n; i++)
    {
      cin >> A[i];
      if (A[i] == 1) { std::cout << "HARD" << '\n'; return 0; }
    }
    std::cout << "EASY" << '\n';
    return 0;
}
