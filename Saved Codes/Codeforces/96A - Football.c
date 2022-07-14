#include<stdio.h>
#include <string.h>

int main(void)
{
    int streak =0, zero_or_one, flag =0;
    char s[101];
    scanf("%s", s);

    int len = strlen(s);

        for(int i=0; i<len; i++)
        {
            
            if (s[i] == '1')
            {
                if (zero_or_one == 1) { streak++; }
                else { zero_or_one = 1; streak = 1; }
            }
            else if (s[i] == '0')
            {
                if (zero_or_one == 0) { streak++; }
                else { zero_or_one = 0; streak = 1; }
            }

            if (streak >= 7) {flag = 1;}
        }
        if (flag == 0) { printf("NO"); }
        else { printf("YES"); }

        return 0;
}
