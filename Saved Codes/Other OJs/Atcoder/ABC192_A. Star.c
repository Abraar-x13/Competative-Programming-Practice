#include <stdio.h>
#include<string.h>

int main(void)
{
    int X;
    scanf("%d", &X);
    int count;
    
    if (X%100==0) { printf("100"); return 0; }
    
    while(1) 
        {
            if ((X+count)%100==0) { printf("%d",count); return 0;}
            
            count++;
        }
    
    
  
    return 0;
}
