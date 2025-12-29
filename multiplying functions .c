#include<stdio.h>
int multiply(int a,int b)
{
	printf("%d",a*b);
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("The required multiplication is : ");
	multiply(a,b);
}
