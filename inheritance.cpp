#include<iostream>
using namespace std;
class base
{
	public:
		base()
		{
			cout<<"Base class constructor called."<<endl;
		}
		~base()
		{
			cout<<"Base class destructor called."<<endl;
		}
};
class derived : public base
{
	public:
		derived()
		{
			cout<<"Derived class constructir called."<<endl;
		}
		~derived()
		{
			cout<<"Derived class desturctor called."<<endl;
		}
};
int main()
{
	derived obj;
}
