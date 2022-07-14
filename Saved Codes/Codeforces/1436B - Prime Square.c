#include <stdio.h>
int main(void)
{
    int t,x;
    scanf("%d", &t);
    for(x=0; x<t;x++)
    {
        int i,j,n;
	scanf("%d", &n);
	int Array[105][105];
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
		    {
				if (i==j) { Array[i][j]=1; }
			    else if (i==j-1){ Array[i][j]=1; }
			    else Array[i][j]=0;
		    }
		} 
		
		Array[n-1][0]=1;
 
		for(i=0;i<n;i++)
		{
		    for(j=0;j<n;j++)
		        printf("%d ",Array[i][j]);
		        printf("\n");
		}
    }
 
	return 0;
}
