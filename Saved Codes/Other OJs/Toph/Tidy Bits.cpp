#include <iostream>
#include <cmath>
using namespace std;

int decToBinary(int n);
int Dec(int x);

int main(void)
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int A;
    std::cin >> A;
    int x= decToBinary(A);
    int ans = Dec(x);
    std::cout << ans << '\n';

    return 0;
}


int Dec(int x)
{
    if(x==1) {return 1;}
    int xm= x-1;
    int B= (Dec(xm) + pow(2,xm)) ;
    return B;

    // ALL HAIL TO RECURSIVE LEAP OF FAITH!
}


int decToBinary(int n)
{
    int binaryNum[128];
    int count=0;
    int i = 0;
    while (n>0)
    {
        binaryNum[i] = n%2;
        if (binaryNum[i]==1) { count += 1; }
        n = n/2;
        i++;
    }
    // for (int j=i-1; j>=0; j--){ cout << binaryNum[j]; }

    return count;
}
