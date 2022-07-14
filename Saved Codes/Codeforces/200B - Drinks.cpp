#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int n;
    double sum=0.0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }

    sum=sum/n;
    printf("%.5lf\n",sum);

    return 0;
}
