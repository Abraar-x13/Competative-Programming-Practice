#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string Num1, Num2,Ans;
    cin >> Num1 >> Num2;
    for (int i=0; i<Num1.length(); i++)
    {
        if (Num1[i] == Num2[i]) { Num1[i] = '0'; }
        else { Num1[i] = '1'; }
    }
    cout << Num1 << endl;
    return 0;
}
