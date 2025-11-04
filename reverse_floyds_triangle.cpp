#include <iostream>
using namespace std;
int main(){int n;cin>>n;int num=n*(n+1)/2;for(int i=n;i>=1;i--){for(int j=1;j<=i;j++)cout<<num--<<" ";cout<<"\n";}return 0;}