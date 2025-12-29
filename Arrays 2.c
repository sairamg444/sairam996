#include<stdio.h>
int main()
{
	int size;
	printf("Enter the elements : ");
	scanf("%d",&size);
	int arr[size];
	int i;
	for(i=0;i<size;i=i+2)
	{
		scanf("%d \n",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("%d \n",arr[i]);
	}
}
