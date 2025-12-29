#include <iostream>
using namespace std;


int main() {
    int x = 10, y = 20;
    cout << "Before function call: x = " << x << ", y = " << y << endl;
    // Call by reference
    swap(x, y);
    cout << "After function call: x = " << x << ", y = " << y << endl;
    return 0;
}
