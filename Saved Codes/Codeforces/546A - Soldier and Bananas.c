#include <stdio.h>

int main(void)
{
    int k,n,w;
    
    int step=0,Bill =0;;
    scanf("%d %d %d", &k, &n, &w);

	while(step<=w)
	{
       Bill= Bill + (step*k);
       step++;
	}
	
	if(Bill>n) { printf("%d\n", Bill-n); return 0;}
	else { printf("0\n"); return 0;}
	return 0;
}
