#include<stdio.h>
struct student
{	
    char name[50];
    int m1,m2,m3;
    float avg,tot;
};
int main()
{
	int i,n;
	printf("Enter no of studdents :");
	scanf("%d",&n);
	struct student s[n];
	for( i = 0 ;i < n ; i++)
	{
		printf("Enter name,3 subject marks of student %d\n",i+1);
		scanf("%s%d%d%d",s[i].name,&s[i].m1,&s[i].m2,&s[i].m3);
	}
	for(i=0;i<n;i++)
	{
		s[i].tot=s[i].m1+s[i].m2+s[i].m3;
		s[i].avg=s[i].tot/3.0;
		printf("The total and avg of student %d is : %.2f,%.2f\n",i+1,s[i].tot,s[i].avg);
	}
	return 0;
}
