#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin>>n;
    int base = 1;
    for (int i=0; i<n; i++) { base += i*4; }
    cout<<base;
    return 0;
}


/*
    Also accepatable - 2*n*(n-1)+1
    Explaination-
    First you count the outermost layer has how many squares. Then the second outermost layer. Until the second smallest layer. So we add them up. Imagine we have a ๐โ๐กโ order rhombus in a cell grid.  The ๐โ๐กโ rhombus has ๐โ1 layers.So the total square except the center square is:
        (4๐โ4)+(4(๐โ1)โ4)+โฏ+2ร4โ4=4(๐โ1+๐โ2+โฏ+1)=2ร(๐โ1)๐
    So the final answer is 2ร(๐โ1)๐ +1
 */
