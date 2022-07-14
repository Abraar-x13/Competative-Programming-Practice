#include<stdio.h>
#include<string.h>
 
int main(void)
{
	int n;
	scanf("%d", &n);
    getchar();
    
	char s[n];
	gets(s);
	int count = 0;
 
	for (int i = 0; i < n; i++)
	{
		if (i>0)
		{
			if (s[i]==s[i-1]) { count = count + 1;}
		}
	}
	if (count == n) { count = count - 1;}
 
	printf("%d\n", count);
	return 0;
 
}
