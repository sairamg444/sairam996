#include<stdio.h>
int main()
{
	int x;
	scanf("%d",x);
	int *p=&x;
	*p++;
	printf("%d %d",*p,x);
	return 0;
}
