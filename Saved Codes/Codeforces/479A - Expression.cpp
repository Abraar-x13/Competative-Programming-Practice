#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int a,b,c;
    int Max;
    cin>>a>>b>>c;
    int A,B,C,D,E,F;

    A=a+b+c;
  	B=a*b*c;
  	C=a+b*c;
  	D=a*b+c;
  	E=(a+b)*c;
  	F=a*(b+c);

    Max = max(A,max(B,max(C,max(D,max(E,F)))));

    std::cout << Max << '\n';

    return 0;
}
