#include<stdio.h>
#include<string.h>
 
int main(void)
{
    char s1[150],s2[150];
    gets(s1);
    gets(s2);
    int l=strlen(s1);
 
    for(int i=0; i<l; i++)
    {
        if(s1[i]>=65&&s1[i]<=90)
        {
            s1[i] += 32;
        }
 
    }
    for(int i=0; i<l; i++)
    {
        if(s2[i]>=65&&s2[i]<=90)
        {
            s2[i] += 32;
        }
    }
 
    int x=strcasecmp(s1,s2);
 
    if(x>0) printf("1");
    else if(x<0) printf("-1");
    else printf("0");
 
 
    return 0;
 
}
