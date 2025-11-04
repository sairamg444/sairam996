#include <iostream>
using namespace std;
int rs(int n){if(n==0)return 0;return n+rs(n-1);}int main(){int n;cin>>n;cout<<rs(n);return 0;}