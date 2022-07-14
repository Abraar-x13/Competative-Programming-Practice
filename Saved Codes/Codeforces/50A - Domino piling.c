#include <stdio.h>
#include<math.h>

int main(void)
{
    int M,N;
    scanf("%d %d", &M, &N);
    
    if (M % 2 == 0) 
    {
		int sum1 = floor(M / 2) * N;
		printf("%d", sum1);
	}
	else {
		int sum1 = floor(M / 2) * N;
		int sum2 = floor(N / 2);
		printf("%d", sum1+sum2 );
	}
    return 0;
}
