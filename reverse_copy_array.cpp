#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){int n;cin>>n;vector<int>a(n),b;for(int i=0;i<n;i++)cin>>a[i];b=a;reverse(b.begin(),b.end());for(int x:b)cout<<x<<" ";return 0;}