#include <stdio.h>
#include <string.h>

int main(void)
{
    char A[3] = {'H', 'Q', '9'};
    char str[100];
    int flag =0;

    gets(str);

    for(int i=0; i<strlen(str); i++)
    {
        if (str[i] == A[0] || str[i] == A [1] || str[i] == A[2])
        {
            flag = 1;
        }
    }

    if (flag == 1) { printf("YES\n"); }
    else { printf("NO\n"); }

    return 0;
}
