#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int n;
    std::cin >> n;

    string A = "I hate ";
    string B = "I love ";
    string C = "that ";
    string D = "it";

    for (int i=0; i<n; i++)
    {
      if( i!=(n-1))
      {
        if(i%2==0) { cout << A; }
        else { cout << B; }
        cout << C;
      }
      else
      {
        if(i%2==0) { cout << A; }
        else { cout << B; }
        cout << D;
      }
    }
    return 0;
}
