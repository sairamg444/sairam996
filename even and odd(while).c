#include<stdio.h>
int main()
{
	int i=1,n,even=0,odd=0;
	scanf("%d",&n);
	while(i<=n)
	{
		printf("Even Numbers :");
		if(i%2==0)
		{
			printf("%d\n",i);
			even++;
		}
		 else
		    {
			printf("%d \n",i);
			odd++;
		    }
		    n=n/10;
	    }
	 printf("Even numbers :\n",even);
	 printf("Odd Numbers : \n",odd);   
}

