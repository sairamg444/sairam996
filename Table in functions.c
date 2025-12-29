#include<stdio.h>
int table(int a)
{
	int i;
	for(i=1;i<11;i++)
	{
    	printf("%d x %d = %d\n",a,i,a*i);
	}
}
int main()
{
	int a;
	scanf("%d",&a);
	printf("The required table is : \n");
	table(a);
}
