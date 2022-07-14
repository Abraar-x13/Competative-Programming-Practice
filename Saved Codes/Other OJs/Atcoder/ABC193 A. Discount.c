#include <stdio.h>
#include<string.h>

int main(void)
{
    float A,B;
    scanf("%f %f", &A, &B);
    
    printf("%f", 100*(1-(B/A)));
  
    return 0;
}
