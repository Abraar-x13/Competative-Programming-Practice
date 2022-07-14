#include<stdio.h>
int main(void)
{
    long long int m,n,a,A,B;
    scanf("%lld%lld%lld",&m,&n,&a);
    if(m%a==0) {A=(m/a);}
    else if(m%a!=0) {A=(m/a)+1;}
 
    if(n%a==0) {B=(n/a);}
    else if(n%a!=0) {B=(n/a)+1;}
 
    printf("%lld\n",A*B);
}
 
