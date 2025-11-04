#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int main(){int n,m;cin>>n>>m;vector<int>a(n),b(m);unordered_set<int>s;for(int i=0;i<n;i++)cin>>a[i];for(int i=0;i<m;i++)cin>>b[i];for(int x:a)s.insert(x);for(int y:b)if(s.count(y))cout<<y<<" ";return 0;}