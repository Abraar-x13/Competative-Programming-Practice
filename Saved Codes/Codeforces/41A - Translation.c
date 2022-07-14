#include <stdio.h>
#include<string.h>
 
int main(void)
{
    char s1[105],s2[105];
    scanf("%s%s",s1,s2);
    int length1,length2;
    length1=strlen(s1);
    length2=strlen(s2);
    if (length2 != length1) {printf("NO\n"); return 0;}
    int count=0;
    int i,j;
    for(i=0,j=length1-1; i<length1,j>=0; i++,j--)
    {
            if(s1[i]==s2[j]) { count++; }
    }
    if(count==length1) { printf("YES\n"); }
    else { printf("NO\n"); }
    
    return 0;
}
