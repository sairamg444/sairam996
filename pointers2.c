#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the values : \n");
	scanf("%d %d",&x,&y);
	int *p1=&x,*p2=&y;
	printf("%d %d",*p1,*p2);
}
