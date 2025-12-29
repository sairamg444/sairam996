#include<stdio.h>
int main()
{
	int n;
	printf("Enter the array length : ");
	scanf("%d",&n);
	int Arr[n];
	int i=0;
	for(i=0;i<n;i=i+1)
	{
		printf("Enter %d element : ",i+1);
		scanf("%d",&Arr[n]);
	}
	for(i=0;i<n;i=i+1)
	{
		printf("%d\n",Arr[i]);
	}
	return 0;
}
