#include<stdio.h>
struct student
{
	int rollno;
	char marks;
};
int main()
{
	int i,n;
	struct student s[n];
	printf("Enter the no of students : \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter rollno of student %d : ",i++);
		scanf("%d",&s[n].rollno);
		printf("Enter %d student marks : i++\n");
		scanf("%s",&s[n].marks);
	}
	printf("%d\n %s",s[n].rollno,s[n].marks);
	int total =0;
	for(i=0;i<=n;i++)
	{
		total =total + s[i].marks;
	}
    float average = (float)total/n;
    printf("\nTotal marks : %d\n",total);
    printf("\nAverage marks : %.2f\n",average);
    return 0;
}
