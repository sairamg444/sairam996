#include <iostream>
using namespace std;
double pw(double a,int b){if(b==0)return 1;return a*pw(a,b-1);}int main(){double a;int b;cin>>a>>b;cout<<pw(a,b);return 0;}