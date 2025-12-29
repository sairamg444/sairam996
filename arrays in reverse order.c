#include<stdio.h>
int main()
{
	int n;
	printf("Enter the elements : ");
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		printf("Reverse order is : %d\n",arr[i]);
	}
}
