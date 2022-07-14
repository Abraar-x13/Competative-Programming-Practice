#include<stdio.h>
int main (void)
{
 
	int t,k;
	k=0;
	scanf("%d", &t);
	for (int k = 0; k<t; k++)
	{
		
		int n,x,i,j;
		scanf("%d", &n);
		scanf("%d", &x);
		int a[n];
		int b[n];
 
		for(i=0; i<n; i++)
		{
		scanf("%d", &a[i]);
		}
		for(j=0; j<n; j++)
		{
		scanf("%d", &b[j]);
		}
		
		int count=0;
		int lx,ly;
		for (lx=0,ly=n-1; lx<(n); lx++,ly--)
		{
			if (a[lx]+b[ly]<=x) {count = count +1;}
		}
 
		if (count == n) {printf("Yes \n");}
		else {printf("No \n");}
 
 
	}
	return 0;
 
}
