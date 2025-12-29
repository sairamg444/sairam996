#include<stdio.h>
main()
{
	int n,a=0,b=0,k;
	scanf("%d",&n);
	while(n>=1)
	{
		k=n%10;
		if(k>=5 && k<=8)
		{
			a++;
		}
		else
		{
			b++;
		}
		n=n/10;
	}
	    printf("The numbers between 5 & 8 are %d",a);
	    printf("\n The numbers which are out of limits : %d",b);
}
