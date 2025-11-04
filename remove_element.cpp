#include <iostream>
#include <vector>
using namespace std;
int main(){int n,x;cin>>n;vector<int>a(n);for(int i=0;i<n;i++)cin>>a[i];cin>>x;for(int v:a)if(v!=x)cout<<v<<" ";return 0;}