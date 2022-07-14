#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(void)
{
	string s;
	cin>>s;

    int l = s.size();
    char A[101];

	for(int i=0; i<l; i++)
    {
        A[i] = s[i];
	}
	sort(A,A+l);
    int count = 1;

    for(int i=0; i<l-1; i++)
    {
        if (A[i]!=A[i+1])
        {
            count++;
        }
    }

    if (count%2==0)
    {
        std::cout << "CHAT WITH HER!" << '\n';
    }
    else
    {
        std::cout << "IGNORE HIM!" << '\n';
    }

	return 0;
}
