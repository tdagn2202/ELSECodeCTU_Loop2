#include <stdio.h>

int main()
{
	int s,i,n;
	s = 0;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		if (i%2 ==0) s+=i;
		else s-=i;
	//	s = s + ((-1)*i) + (i+1);
	}
	printf("%d",s);
}
