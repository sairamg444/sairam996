#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the numbers");
	scanf("%d %d %d",&a,&b,&c);
	if(a+b==c)
	{
		printf("it is valid");
	}
	else
	{
		printf("it is invalid");
	}
}
