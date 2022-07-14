#include <stdio.h>
 
int main(void)
{
    int n,i,d=0;
    int a,b,c;
    scanf("%d",&n);
 
    for(i=0; i<n; i++)
    {
        scanf("%d %d %d", &a,&b,&c);
        if (a+b+c >= 2){d=d+1;}
    }
    printf("%d",d);
    return 0;
}
