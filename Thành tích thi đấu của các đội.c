#include <stdio.h>

int main()
{
	int n,i;
	float avg,t,sum;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%f",&t);
		sum +=t;
	    avg = sum/n;
	}
	printf("%.2f %.2f",sum,avg);
}
