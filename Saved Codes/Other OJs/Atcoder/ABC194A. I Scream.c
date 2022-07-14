#include <stdio.h>
#include<string.h>

int main(void)
{
    int A,B;
    scanf("%d %d", &A, &B);
    int sol = A+B; int fat=B;
    
    if (sol>=15 && fat>=8) { printf("1"); }
    else if(sol>=10 && fat>=3) { printf("2"); }
    else if(sol>=3) { printf("3"); }
    else { printf("4"); }
  
    return 0;
}
