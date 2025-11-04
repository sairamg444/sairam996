#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){int n;cin>>n;vector<int>a(n);for(int i=0;i<n;i++)cin>>a[i];auto [mn,mx]=minmax_element(a.begin(),a.end());cout<<*mn<<" "<<*mx;return 0;}