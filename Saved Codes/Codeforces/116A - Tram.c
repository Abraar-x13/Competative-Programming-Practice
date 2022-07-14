#include <stdio.h>

int main(void)
{
    int n,bi,ai, passenger=0, max = 0;
    scanf("%d", & n);
    while(n--)
    {
        scanf("%d%d", &ai, &bi);
        passenger= passenger + bi;
        passenger= passenger - ai;

        if (passenger>max) { max = passenger; }
    }

    printf("%d", max);
    return 0;
}
