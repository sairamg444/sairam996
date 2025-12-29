#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int *p=&x;
	printf("The required answer is : %d",*p);
	return 0;
}
