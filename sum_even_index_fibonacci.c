#include <stdio.h>
int main(){int n,a=0,b=1,c,s=0,i;scanf("%d",&n);for(i=0;i<n;i++){if(i%2==0)s+=a;c=a+b;a=b;b=c;}printf("%d",s);return 0;}