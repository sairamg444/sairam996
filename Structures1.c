#include<stdio.h>
struct Info
{
	int age;
	char name[20];
};
int main()
{
	struct Info obj;
	obj.age=20;
	printf("%d",obj.age);
	return 0;
}
