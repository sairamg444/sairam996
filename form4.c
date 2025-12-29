#include<stdio.h>
main()
{
	int x1,x2,y1,y2;
	printf("enter the numbers:");
	scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
	float a;
	a=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	printf("%f",a);

}
