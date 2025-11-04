#include <iostream>
#include <vector>
using namespace std;
int main(){int n,m;cin>>n>>m;vector<int>a(n),b(m),c;for(int i=0;i<n;i++)cin>>a[i];for(int i=0;i<m;i++)cin>>b[i];c=a;c.insert(c.end(),b.begin(),b.end());for(int x:c)cout<<x<<" ";return 0;}