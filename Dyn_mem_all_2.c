#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr=malloc(n*4);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int m;
	scanf("%d",&m);
    int arr=realloc(arr,(n+m)*sizeof(int));
    for(int j=0;j<m;j++)
    {
    	scanf("%d",&arr[j]);
	}
	return 0;
}
