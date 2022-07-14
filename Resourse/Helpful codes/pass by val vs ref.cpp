#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FAAST std::ios::sync_with_stdio(false); cin.tie(NULL);

void increment(int &n1, int n2)
{
    // Passing by Ref vs Val:
    n1++;
    n2++;
    //n1 actually increases. n2 doesnt.
}

void swap_by_val(int a, int b)
{
    int temp = b;
    b = a;
    a = temp;
}
void swap_by_ref(int &a, int &b)
{
    int temp = b;
    b = a;
    a = temp;
}


int main(void) 
{
    FAAST;
    int TC; cin >> TC;
    for (int tc = 0; tc < TC; tc++)
    {
        int a = 10; int b = 20;
        cout<< a << " "<< b<< "\n";
        increment(a,b);
        cout<< a << " "<< b<< "\n";


        // test swap.
        a = 10; b = 20;
        cout<< a << " "<< b<< "\n";
        swap_by_val(a,b);
        cout<< a << " "<< b<< "\n";
        swap_by_ref(a,b);
        cout<< a << " "<< b<< "\n";
    }
    return 0;
}

