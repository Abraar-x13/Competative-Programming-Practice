#include <stdio.h>
int main (void)
{
	int n;
	scanf("%d", &n);
	getchar();
	int x=0;
	char op[n*3 +1];
	for (int i=0; i<n; i++)
	{
 
		scanf("%s",op);
 
		if (op[1]=='+') {x++;}
		if (op[1]=='-') {x--;}
	}
	printf("%d\n", x);
}
