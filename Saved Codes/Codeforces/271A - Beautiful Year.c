#include<stdio.h>
#include<string.h>


int digits(int n);


int main(void)
{
    int n,x,i;
    scanf("%d",&n);
    for(i=n+1;i<=9012;i++)
    {
       int d1,d2,d3,d4;
        d1=i%10;
        d2=(i/10)%10;
        d3=(i/100)%10;
        d4=(i/1000)%10;
        
        if(d1!=d2 && d1!=d3 && d1!=d4 && d2!=d3 && d2!=d4 &&d3!=d4) 
        { 
            printf("%d\n",i); 
            break; 
        }
    }
    return 0;
}
