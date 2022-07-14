#include <bits/stdc++.h>
using namespace std;
  
int CheckAnagram(string A, string B);
  
int main(void)
{
    string A;
    string B;
    std::cin >> A>>B;
  
    if (CheckAnagram(A, B)) { cout << "Yes"; }
    else { cout << "No"; }
  
    return 0;
}

int CheckAnagram(string A, string B)
{
    int len1 = A.length();
    int len2 = B.length();
  
    if (len1 != len2) { return 0; }
  

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
  
    for (int i = 0; i < len1; i++)
    {
        if (A[i] != B[i]) { return 0; }
    }
    return 1;
}
