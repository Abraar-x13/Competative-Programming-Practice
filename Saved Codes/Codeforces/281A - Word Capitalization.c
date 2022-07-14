#include<stdio.h>
#include<string.h>
 
int main(void)
{
    char A[1001];
    gets(A);
    int l=strlen(A);
 
    if(A[0]>=65 && A[0]<=90)
    {
    	for (int i = 0; i < l; i++) { printf("%c",A[i]); }
    }
    else 
    {
    	A[0] = A[0]-32 ; 
    	for (int i = 0; i < l; i++) { printf("%c",A[i]); }
    }
 
    return 0;
 
}
