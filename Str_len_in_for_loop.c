#include<stdio.h>
#include<string.h>
int main()
{
	char Arr[15];
	scanf("%s",Arr);
	int Length=0;
	for(int index=0;Arr[index]!='\0';index++)
	{
		Length++;
	}
	printf("%d",Length);
	return 0;
}
