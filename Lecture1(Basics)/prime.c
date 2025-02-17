#include<stdio.h>
int main()
{
	int n;
	printf("enter number");
	scanf("%d",&n);
	int i;
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
			printf("not prime");
			break;
		}
		else
		{
			printf("prime");
		}
	}
	return 0;
}
