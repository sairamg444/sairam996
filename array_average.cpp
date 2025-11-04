#include <iostream>
#include <vector>
using namespace std;
int main(){int n;cin>>n;vector<int>a(n);double s=0;for(int i=0;i<n;i++){cin>>a[i];s+=a[i];}cout<<s/n;return 0;}