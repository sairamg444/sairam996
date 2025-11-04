#include <iostream>
#include <vector>
using namespace std;
int main(){int n;cin>>n;vector<int>a;for(int i=0;i<n;i++){vector<int>b(i+1,1);for(int j=1;j<i;j++)b[j]=a[j-1]+a[j];for(int x:b)cout<<x<<" ";cout<<"\n";a=b;}return 0;}