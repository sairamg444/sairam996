#include<stdio.h>
int main()
{
	int size;
	printf("Enter the size of Array : ");
	scanf("%d",&size);
	int Arr[size];
	int i;
	for(i=0;i<size;i++)
	{
		scanf("%d",&Arr[i]);
	}
		for(i=0;i<size;i++)
	{
		printf("%d\n",Arr[i]);
	}
	return 0;
}
