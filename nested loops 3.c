#include<stdio.h>
int main()
{
	int i,j,n,p;
	printf("Enter p and n values : ");
	scanf("%d %d",&n,&p);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=p;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
