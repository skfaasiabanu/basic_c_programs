#include<stdio.h>
int main()
{
   int p,t,r;
   printf("enter p,t,r");
   scanf("%d%d%d",&p,&t,&r);
   int si;
   si=(p*t*r)/100;
   printf("simple interest is :%d",si);
   return 0;	
}
