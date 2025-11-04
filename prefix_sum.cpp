#include <iostream>
#include <vector>
using namespace std;
int main(){int n;cin>>n;vector<int>a(n),p(n);for(int i=0;i<n;i++){cin>>a[i];p[i]=a[i]+(i?p[i-1]:0);}for(int x:p)cout<<x<<" ";return 0;}