#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the values : \n");
	scanf("%d %d",&a,&b);
	int *p1=&a,*p2=&b;
	printf("Sum is : %d",*p1+*p2);
}
