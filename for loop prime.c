#include<stdio.h>
int main()
{
	int i,N,count=0;
	scanf("%d",&N);
	for(i=1;i<=N;i=i+1)
	{
		if(N%i==0)
		{	
		count =count+1;
		printf("%d",i);
        }
    }
        if(count<=2)
        {
		printf("\n It is a Prime");
        }
	
	else
    	{
		printf("\n It is not a prime");
	    }
}
