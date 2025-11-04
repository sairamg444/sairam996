#include <stdio.h>
int main(){int l,u,i,j,f;scanf("%d%d",&l,&u);for(i=l;i<=u;i++){f=0;for(j=2;j<=i/2;j++)if(i%j==0){f=1;break;}if(!f&&i>1)printf("%d ",i);}return 0;}