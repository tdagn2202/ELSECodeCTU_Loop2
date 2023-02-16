#include <stdio.h>

int main()
{
	double s,n;
	int i;
	s = 0;
	i=1;
	scanf("%lf",&n);
	while (s<=n)
	{ 
		s += 1.0/i;
		i++;
	}
	printf("%d",i-1);

}
