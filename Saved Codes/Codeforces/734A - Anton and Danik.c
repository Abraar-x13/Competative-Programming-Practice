#include<stdio.h>
#include<string.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    int Awon=0,Dwon=0;
    
    for(int i=0; i<n; i++)
    {
        if(s[i]=='A') { Awon++; }
        else if(s[i]=='D') { Dwon++; }
    }
    if(Awon>Dwon) { printf("Anton\n");}
    else if(Awon<Dwon) { printf("Danik\n");}
    else if(Awon==Dwon) { printf("Friendship\n");}
    return 0;
}
