#include<stdio.h>
struct Info
{
	int age;
	char name[30];
};
int main()
{
	struct Info obj1,obj2;
	scanf("%d",&obj1.age);
	scanf("%s\n",obj1.name);
	
	scanf("%d",&obj2.age);
	scanf("%s",obj2.name);
	printf("%d %s\n",obj1.age,obj1.name);
	printf("%d %s",obj2.age,obj2.name);
	return 0;
}
