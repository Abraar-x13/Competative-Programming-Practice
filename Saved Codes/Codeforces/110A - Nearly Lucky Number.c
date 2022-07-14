#include <stdio.h>
#include<string.h>

int main(void)
{
    int i,count=0;
    char A[18];
    scanf("%s",A);
    
    for(i=0; i<strlen(A); i++)
    {
        if(A[i]=='4'||A[i]=='7')
        {
            count++;
        }
    }
    if(count==4||count==7) {printf("YES\n");}
    else {printf("NO\n");}
    
    return 0;
}
