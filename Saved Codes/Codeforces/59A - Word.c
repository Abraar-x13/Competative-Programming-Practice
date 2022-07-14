#include<stdio.h>
#include<string.h>

int main(void)
{
    char A[101];
    int low=0,upp=0,i;
    scanf("%s",A);
    for(i=0; i<strlen(A); i++)
    {
        if(A[i]>=65&&A[i]<=90)
            upp++;
        else if(A[i]>=97&&A[i]<=122)
        {
            low++;
        }
    }
    if(upp>low)
    {
        for(i=0; i<strlen(A); i++)
        {
            if(A[i]>=97&&A[i]<=122)
            {
                A[i]=65+A[i]-97;
            }
        }
    }
    else
    {
        for(i=0; i<strlen(A); i++)
        {
            if(A[i]>=65&&A[i]<=90)
            {
                A[i]=97+A[i]-65;
            }
        }
    }
    printf("%s\n",A);
    return 0;
}
