#include<stdio.h>
int larger(int a,int b)
{
	printf("The largest no is : ");
	if(a>b)
	{
		printf("%d",a);
	}
	else
	{
		printf("%d",b);
	}
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	larger(a,b);
}
