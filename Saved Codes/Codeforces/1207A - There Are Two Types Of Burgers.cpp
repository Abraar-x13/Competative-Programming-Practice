#include <iostream>
#include <string>
#include <algorithm>
#include<cmath>
using namespace std;

int main(void)
{
    int TC;
    cin >>TC;

    while(TC--)
    {
        int buns,beef,chic;
        cin >>buns>>beef>>chic;

        int hPrice,cPrice;
        cin >>hPrice>>cPrice;

        int profit;

        if(buns<2) { profit=0; }
        else
        {
            int maxNumOfBergs = buns/2;

            if(hPrice>=cPrice)
            {
                profit=min( beef,maxNumOfBergs )*hPrice, maxNumOfBergs-=beef;
                if(maxNumOfBergs>0) { profit += min( chic,maxNumOfBergs )*cPrice; }
            }
            else
            {
                profit=min( chic,maxNumOfBergs )*cPrice, maxNumOfBergs-=chic;
                if( maxNumOfBergs>0 ) { profit += min( beef,maxNumOfBergs )*hPrice; }
            }
        }

        cout << profit<<endl;
    }

    return 0;
}
