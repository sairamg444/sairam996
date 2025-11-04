#include <iostream>
using namespace std;
template<typename T> T sum(T v){return v;}template<typename T,typename...Ts> T sum(T first,Ts...rest){return first+sum(rest...);}int main(){cout<<sum(1,2,3,4);return 0;}