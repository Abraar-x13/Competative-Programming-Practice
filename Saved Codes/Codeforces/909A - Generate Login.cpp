#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
        string A,B;
        cin>> A>> B;
        string ans("");
        ans += A[0];

        int len1 = A.length();
        int len2 = B.length();

        bool BteGese = 0;
        int i=1,j=0;
        while(BteGese==0)
        {
            if( i!=len1 && A[i]<B[j] )
            {
                ans = ans + A[i];
                i++;
            }
            else
            {
                ans = ans + B[j];
                BteGese=1;
            }
            if (i==100) { break;}
        }

        cout<<ans;


    return 0;
}
