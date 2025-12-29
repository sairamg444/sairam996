#include<iostream>
using namespace std;
class math
{
	public:
		int add(int a,int b)
		{
			return a+b;
		}
		int add(int a,int b,int c)
		{
			return a+b+c;
		}
};
int main()
{
	math a;
	cout<<"Sum : "<<a.add(1,2)<<endl;
	cout<<"Sum : "<<a.add(1,2,3)<<endl;
}
