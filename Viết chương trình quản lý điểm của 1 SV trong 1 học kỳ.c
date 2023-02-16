#include <stdio.h>

int main()
{
	int n,i;
	float avg,t,sum,max,min;
	max = -1;
	min = 11;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%f",&t);
		if (min >t) min =t;
		if (max <t) max =t;
		sum +=t;
	    avg = sum/n;
	}
	printf("%.2f %.2f %.2f",avg,max,min);
}
