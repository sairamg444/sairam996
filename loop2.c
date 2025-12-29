#include<stdio.h>
main()
{
	int n,even_count=0,last_digit,odd_count=0;
	scanf("%d",&n);
	while(n>0)
	{last_digit=n%10;
	if(last_digit%2==0)
	{even_count++;
	}
	else{odd_count++;
	}
	n=n/10;
	}
	printf("%d %d",even_count,odd_count);
}

