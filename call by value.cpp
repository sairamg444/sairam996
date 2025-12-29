#include <iostream>
using namespace std;
void change(int x)
 {
    x=10;
}
int main() 
{
    int num = 5;
    cout << "Before call by value : "<< num << endl;
    change(num);
    cout << "After call by value : " << num << endl;
    return 0;
}













