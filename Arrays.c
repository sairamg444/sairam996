#include<stdio.h>
int main()
{
	int size,max;
	printf("Enter the size : ");
	scanf("%d",&size);
	int arr[size];
	int i;
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	max = arr[0];

    for(i = 1; i < 5; i++)
	 {
        if(arr[i] > max) 
		{
            max = arr[i];
            printf("%d",max);
        }
     }
 }
