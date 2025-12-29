#include <stdio.h>
int binary_search(int arr[],int low,int high,int x)
{
	
	while(low<=high)
	{
	int mid = low+((high-low)/2);
	   if(arr[mid]==x)
	   return x;
	   if(arr[mid]<x)
	   	low = mid+1;
	   else 
	   	high = mid-1;
	}
	return -1;
}
   int main()
	{
		int arr[]={2,3,4,5,6,7,8,9};
		int n=sizeof(arr)/sizeof(arr[0]);
		int x=6;
		int result = binary_search(arr,0,n-1,x);
		if(result=-1)
		{
			printf("Element is not found");
		}
		else
		{
			printf("element is found in the index %d",arr[x]);
		}	
	}

