#include<stdio.h>
void fun(int a)
{
	if(a==8) return;
	printf("%d\n",a);
	fun(a+1);
	printf("\nHai");
}
int main()
{
	fun(1);
	return 0;
}
