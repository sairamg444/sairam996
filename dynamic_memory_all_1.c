#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int arr[5]={10,20,30,40,50};
	int *ptr=malloc(5*sizeof(int));
	ptr[0]=1;
	ptr[1]=2;
	ptr[2]=3;
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d\n",ptr[i]);
	}
}
