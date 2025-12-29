#include <iostream>
using namespace std;
int add(int a, int b = 0, int c = 0) 
{
    return a + b + c;
}
int main() 
{
    cout << "Add one number: " << add(5) << endl;           
    cout << "Add two numbers: " << add(5, 10) << endl;     
    cout << "Add three numbers: " << add(5, 10, 15) << endl; 
    return 0;
}

