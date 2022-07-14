#include <stdio.h>
 
int main(void)
{
    int a,b;
    scanf("%d %d", &a, &b);
    
    if (a==b) { printf("%d",1); return 0; }
    for (int i=1; i<=8; i++) 
    {
        if (a>b) { printf("%d",i-1); return 0;}
        else 
        {
            a=a*3;
            b=b*2;
        }
    }
    return 0;
}
