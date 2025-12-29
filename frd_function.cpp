#include <iostream>
using namespace std;
class MyClass 
{
private:
    int number = 10;
    friend void show(MyClass);
};
void show(MyClass obj) 
{
    cout << "Number is: " << obj.number << endl;
}
int main() 
{
    MyClass obj;
    show(obj);  
    return 0;
}
