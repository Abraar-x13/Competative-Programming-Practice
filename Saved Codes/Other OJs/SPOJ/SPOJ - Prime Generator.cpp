#include <iostream>
using namespace std;
 
int main(void)
{
    int T;
    cin>>T;
    while (T--)
    {
        int a, b;
        cin >> a>> b;
     
        if (a<=2)
        {
            a=2;
            if (b>=2)
            {
                cout << a << " ";
                a++;
            }
        }
     
        if (a % 2 == 0)
            a++;
     
        for (int i=a; i<=b; i+=2)
        {
            bool flag = 1;
     
            for (int j=2; (j*j)<=i; ++j)
            {
                if (i%j == 0) { flag = 0; break; }
            }
            if (flag == 1)
                cout << i << " ";
        }
        cout<<endl;
    }
    return 0;
}
