#include<stdio.h>
int main()
{
	int s;
	int i;
	int sum=0;
	int avg;
	for(i=1;i<26;i++)
	{
		printf("enter score");
		scanf("%d",&s);
		sum=sum+s;
	}
	printf("%d",sum);
	avg=sum/25;
	printf("%d",avg);
	return 0;
}
