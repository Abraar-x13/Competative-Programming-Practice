//Learned from : https://www.youtube.com/watch?v=fjcpZbEDslE
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

int n, c, cows, LargestMinDist, mid, temp;
vector<int> A;

bool check(int k);
void BS(int l, int u);


int main()
{
    int T;
    cin>> T;

    while(T--)
    {
        cin>> n >> c;
        A.clear(); A.resize(n);

        for(int i=0; i<n; i++) { cin>> A[i]; }

        sort(A.begin(), A.end());

        BS(0, A[n-1]);

        cout<< LargestMinDist << endl ;
    }

    return 0;
  }


bool check(int k)
{
    cows=1;
    temp=A[0];

    for(int i=1; i<n; i++)
    {
        int diff = A[i]-temp;
        if(diff>=k) { cows++ ; temp=A[i] ; }
    }

    if(cows>=c) return true ;
    else return false ;
}


void BS(int low, int up)
{
    LargestMinDist=-1 ;
    while(low<=up)
    {
        mid=(low+up)/2 ;
        if( check(mid) )
        {
            if(mid>LargestMinDist) { LargestMinDist=mid ; }
            low=mid+1 ;
        }
        else { up=mid-1 ;}
      }
}
