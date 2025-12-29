#include <iostream>
using namespace std;
void change(int &x) 
{
    x=10;
}

int main() 
{
    int num = 5;
    cout << "Before call by reference : " << num << endl;
    change(num);
    cout << "After call by reference : " << num << endl;
    return 0;
}

