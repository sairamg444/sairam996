#include <iostream>
using namespace std;
class MagicAdd {
public:
    int add(int a, int b) {
        return a + b;
    }
    int add(int a, int b, int c) {
        return a + b + c;
    }
    double add(double a, double b) {
        return a + b;
    }
};
int main() {
    MagicAdd magic;
    cout << "2 + 3 = " << magic.add(2, 3) << endl;
    cout << "1 + 2 + 3 = " << magic.add(1, 2, 3) << endl;
    cout << "2.5 + 3.5 = " << magic.add(2.5, 3.5) << endl;
    return 0;
}

