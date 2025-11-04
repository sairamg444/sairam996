#include <stdio.h>
#include <math.h>
int main(){int n,t,d,r,s;for(n=1;n<=1000;n++){t=n;d=0;s=0;while(t){t/=10;d++;}t=n;while(t){r=t%10;s+=pow(r,d);t/=10;}if(s==n)printf("%d ",n);}return 0;}