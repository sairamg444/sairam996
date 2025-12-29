#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10],s2[10];
	scanf("%s %s",&s1,&s2);
	if(strlen(s1)>strlen(s2))
	{
		strcat(s1,s2);
		printf("%s",s1);
	}
	else
	{
	    strcat(s2,s1);
	    printf("%s",s2);
    }
}

