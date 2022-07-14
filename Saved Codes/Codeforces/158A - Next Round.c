#include<stdio.h>
 
int main(void)
{
    int n,k;
    scanf("%d%d",&n,&k);
    
    int a[51],count=0;
    
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]>=a[k-1] && a[i]>0) { count++; }
    }
    
        printf("%d",count);
    
    return 0;
 
}
