#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[101];
    int flag =0;
    scanf("%s", s);
    int len = strlen(s);

    for(int i=0; i<len; i++)
    {
        for(int j=i+1; j<len; j++)
        {
            for(int k=j+1; k<len; k++)
            {
                for(int l = k+1; l <len; l++)
                {
                    for(int m =l+1; m<len; m++)
                    {
                        if (s[i]=='h' && s[j] == 'e' && s[k] == 'l' && s[l] == 'l' && s[m] == 'o') { flag =1; }
                    }
                }
            }
        }
    }

    if (flag) { printf("YES"); }
    else { printf("NO"); }

    return 0;
}
