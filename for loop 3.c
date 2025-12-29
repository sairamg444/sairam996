#include<stdio.h>
main()
{
	int i,a,b;
	printf("Enter the number to start : ");
	scanf("%d",&a);
	printf("Enter the number to stop : ");
	scanf("%d",&b);
	for(i=1;i<=b;i=i+1)
	{
		printf("%d * %d = %d \n",a,i,a*i);
	}
	
}
