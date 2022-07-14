#include<iostream>
using namespace std;
  

int main(void)
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int A;
    std::cin >> A;
  
    for(int i=1; i<=A; i++)
    {
        if(A%i==0) { cout<<i<<"\n"; }
    }
  
    return 0;
}
