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
    First you count the outermost layer has how many squares. Then the second outermost layer. Until the second smallest layer. So we add them up. Imagine we have a 𝑛−𝑡ℎ order rhombus in a cell grid.  The 𝑛−𝑡ℎ rhombus has 𝑛−1 layers.So the total square except the center square is:
        (4𝑛−4)+(4(𝑛−1)−4)+⋯+2×4−4=4(𝑛−1+𝑛−2+⋯+1)=2×(𝑛−1)𝑛
    So the final answer is 2×(𝑛−1)𝑛 +1
 */
