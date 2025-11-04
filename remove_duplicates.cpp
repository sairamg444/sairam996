#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int main(){int n;cin>>n;vector<int>a(n);unordered_set<int>s;for(int i=0;i<n;i++)cin>>a[i];for(int x:a)if(!s.count(x)){cout<<x<<" ";s.insert(x);}return 0;}