#include<stdio.h>
int main()
{
	int n;
	printf("enter natural number");
	scanf("%d",&n);
	int sum=0;
	int i;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
	return 0;
}
