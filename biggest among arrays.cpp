#include <stdio.h>
int main() 
{
    int size; 
    int i, max; 
    printf("Enter the elements: ");
    scanf("%d",&size);
    int arr[size];
    for(i = 0; i < size; i++) 
	{
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for(i = 1; i < size; i++) 
	{
        if(arr[i] > max) 
		{
            max = arr[i];
        }
    }
    printf("The largest element is %d\n", max);

    return 0;
}
