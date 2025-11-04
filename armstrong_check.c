#include <stdio.h>
#include <math.h>
int main(){int n,t,d=0,s=0;scanf("%d",&n);t=n;while(t){t/=10;d++;}t=n;while(t){int r=t%10;s+=pow(r,d);t/=10;}printf(s==n?"Armstrong":"Not Armstrong");return 0;}