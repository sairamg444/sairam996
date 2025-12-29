#include<stdio.h>
struct Details
{
	char name[30];
	char gender[10];
	int age[2];
	char rollNo[20];
};
int main()
{
	int n;
    printf("Enter number of students : ");
    scanf("%d",&n);
    struct Details obj[n];
    int i;
    for(i=0;i<n;i++)
    {
    	printf("Enter student name :");
    	scanf("%s",obj[i].name);
    	printf("Enter rollNo :");
    	scanf("%s",obj[i].rollNo);
    	printf("Enter Gender : ");
    	scanf("%s",obj[i].gender);
    	printf("Enter Age : ");
    	scanf("%d",&obj[i].age);
    }
    int studentNumber;
    printf("Enter student number for details :");
    scanf("%d",&studentNumber);
    printf("Name : %s\n",obj[studentNumber-1].name);
    printf("Name : %s\n",obj[studentNumber-1].rollNo);
    printf("Roll number :%s\n",obj[studentNumber-1].gender);
    printf("Age : %d",obj[studentNumber-1].age);
    return 0;
}
    

