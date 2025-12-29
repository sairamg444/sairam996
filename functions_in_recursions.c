#include<stdio.h>
void fun(int a)
{
	if(a>6) return;
	fun(a+2);
	printf("%d\n",a);
	fun(a+1);
}
int main()
{
	fun(1);
	return 0;
}
