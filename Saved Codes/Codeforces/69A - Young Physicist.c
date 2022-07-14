#include<stdio.h>
#include <string.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	int x,y,z;
	int X=0,Y=0,Z=0;
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d %d", &x,&y,&z);
		X = X + x;
		Y = Y + y;
		Z = Z + z;
	}

	if ( X== 0 && Y== 0 && Z==0) { printf("YES"); }
	else { printf("NO"); }
}
