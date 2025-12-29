#include<stdio.h>
#include<math.h>
main()
{
	int a=7,b=2,c=9;
	int s=a+b+c/2;
	printf("%d",s);
	int result=(sqrt(s*(s-a)*(s-b)*(s-c)));
	printf("%d",result);
	return 0;	
}
