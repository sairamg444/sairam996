#include <stdio.h>
#include <math.h>
int main(){int l,u,n,t,d,s;scanf("%d%d",&l,&u);for(n=l;n<=u;n++){t=n;d=0;s=0;while(t){t/=10;d++;}t=n;while(t){int r=t%10;s+=pow(r,d);t/=10;}if(s==n)printf("%d ",n);}return 0;}