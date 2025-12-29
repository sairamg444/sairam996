#include<stdio.h>
#include<math.h>
main()
{
	int a,b,s;
	printf("Enter A : ");
    scanf("%d",&a);
	printf("Enter B : ");
	scanf("%d",&b);
	if(a>b)
	{
		s=a;
	printf("a is bigger");
	}
	else
	{
		s=b;
	printf("b is bigger");		
	}
	int  k= log10(s)+1;
	printf("\n Number of digits : %d",k);
}
