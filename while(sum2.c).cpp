#include<stdio.h>
int main()
{
	int n,i,N,sum=0;
	scanf("%d",&n);
	while(n>=1)
	{
		N=n%10;
		sum=sum+N;
		n=n/10;
		i++;
	}
		printf("%d",sum);
}
