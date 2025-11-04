#include <stdio.h>
int main(){int n,sq,s=0;scanf("%d",&n);sq=n*n;while(sq){s+=sq%10;sq/=10;}printf(s==n?"Neon":"Not Neon");return 0;}