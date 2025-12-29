#include<stdio.h>
int main()
{
	char Arr[15];
	scanf("%s",Arr);
	int Length=0,index=0;
	while(Arr[index]!='\0')
	{
		Length++;
		index++;
	}
	printf("%d",Length);
	return 0;
}
