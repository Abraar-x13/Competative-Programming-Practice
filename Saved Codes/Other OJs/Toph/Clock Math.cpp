#include<iostream>
#include <iomanip> 
using namespace std;
  

int main(void)
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    double H,M;
    std::cin >> H>>M;
  
    double A = abs(0.5*((60*H)-(11*M)));
    if(A>180) {A = 360 - A;}
    std::cout << std::setprecision(5) << A << '\n';
    return 0;
}
