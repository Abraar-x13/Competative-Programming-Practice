#include<stdio.h>
 
int diff(int a , int b);
 
int main(void)
{
	int MAT[5][5];
    int i,j;
    int x,y;
    int ans;
 
    for (i = 0; i < 5; i++)
    {
    	for (j = 0; j < 5; j++)
    	{
    		scanf("%d", &MAT[i][j]);
 
    		if (MAT[i][j] == 1) 
    			{
    				x= i; y=j;
    			}
    	}
    }
    
    ans = diff (x,2) + diff(y,2) ; 
    printf("%d", ans);
    return 0;
}
 
int diff(int a , int b)
{
	if (a>b) {return a-b;}
	else if (a<b) {return b-a;}
	else if (a==b) {return 0;}
} 
