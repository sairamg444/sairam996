#include<stdio.h>
//function to get maximum number
int getMax(int a[],int n)
{
	int max = a[0],i;
	for(i=0;i<n;i++)
	{
		if(a[i] > max)
		max=a[i];
	}
	return max;
}
//function to implement radix sort
void radixSort(int a[],int n)
{
	int big,nod=0,steps,count[10],i,j,k,bucket[10][n],loc,div=1;
	big=getMax(a,n);
	//counting no of digits in largest no
	while(big>0)
	{
	nod++;
	big=big/10;
	}
	for(steps=1;steps<=nod;steps++)
	{
		for(j=0;j<10;j++)
		{
			count[j] = 0;
		}
		//Distribute elements into buckets
		for(i=0;i<n;i++)
		{
			loc=(a[i] / div) % 10;
			bucket[loc][count[loc]++] = a[i];
		}
		//collect elements back into array
		k=0;
		for(j=0;j<10;j++)
		{
			for(i=0;i<count[j];i++)
			{
				a[k++] = bucket[j][i];
			}
		}
		//moving to the next digit
		div=div*10;
	}
}
void printArray(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
int main()
{
	int a[100],n,i;
	printf("\nEnter no of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Before sorting, array elements are : \n");
	printArray(a,n);
	radixSort(a,n);
	printf("After applying Radix sort,elements are : \n");
	printArray(a,n);
	return 0;
}
