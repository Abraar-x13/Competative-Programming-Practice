#include <stdio.h>
#include<string.h>

int main(void)
{
    char S[4];
    scanf("%s", S);
    
    S[3]=S[0];
    
    for(int i=1;i<4;i++)
    {
        printf("%c", S[i]);
    }
    
    return 0;
}
