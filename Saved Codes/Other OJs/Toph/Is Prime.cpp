#include<iostream>
#include <iomanip> 
using namespace std;
  

int main(void)
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int N;
    std::cin >>N;
    if (N==1) { std::cout << "No"; return 0; }

    for(int i=2; i<=(N/2); i++)
    {
        if(N%i==0) { std::cout << "No"; return 0; }
    }
     std::cout << "Yes";
    return 0;
}
