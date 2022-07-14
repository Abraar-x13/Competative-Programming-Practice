#include <stdio.h>
#include<string.h>

int main(void)
{
    int M,H;
    scanf("%d %d", &M, &H);
    
    if (H%M==0) { printf("Yes"); }
    else { printf("No"); }
  
    return 0;
}
