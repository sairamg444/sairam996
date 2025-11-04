#include <iostream>
#include <cmath>
using namespace std;
bool isprime(int n){if(n<2)return false;for(int i=2;i*i<=n;i++)if(n%i==0)return false;return true;}
int main(){int n;cin>>n;bool ok=false;for(int i=2;i<=n/2;i++)if(isprime(i)&&isprime(n-i)){ok=true;break;}cout<<(ok?"Yes":"No");return 0;}