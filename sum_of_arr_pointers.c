#include<stdio.h>
int Fun(int *ptr,int size)
{
	int sum=0,i;
	for(i=0;i<size;i++)
	{
		sum=sum+*(ptr+i);
	}
	return sum;
}
int main()
{
	int n;
	printf("Enter values :\n ");
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		printf("%d",&Fun,n);
	}
	Fun(&arr[0],n);
	return 0;
}
