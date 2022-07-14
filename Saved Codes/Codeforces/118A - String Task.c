#include<stdio.h>
#include<string.h>

int main(void)
{
    char s[101];
    scanf("%s",s);
    int l=strlen(s);
    
    for(int i=0; i<l; i++)
    {
        if(s[i]!='A' && s[i]!='a' && s[i]!='E' && s[i]!='e' && s[i]!='I' && s[i]!='i' && s[i]!='O' && s[i]!='o' && s[i]!='U' && s[i]!='u' && s[i]!='Y' && s[i]!='y')
        {
            if(s[i]<='Z') { s[i]+=32; }
            printf(".%c",s[i]);
        }
    }
    printf("\n");
 
    return 0;
 }
