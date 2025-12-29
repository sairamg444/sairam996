#include<stdio.h>
struct ParentDetails
{
	char fatherName[20];
	int fatherAge[20];
};
struct studentDetails
{
	char name[20];
	char rollnumber[20];
	int age;
	struct ParentDetails Details;
};
int main()
{
	struct studentDetails obj;
	scanf("%s",obj.name);
	scanf("%s",obj.rollnumber);
	scanf("%d",&obj.age);
	scanf("%s",obj.Details.fatherName);
	scanf("%s",obj.Details.fatherAge);
	printf("%s",obj.name);
	printf("%s\n",obj.rollnumber);
	printf("%d\n",&obj.age);
	printf("%s\n",obj.Details.fatherName);
	printf("%s\n",obj.Details.fatherAge);
	
}
