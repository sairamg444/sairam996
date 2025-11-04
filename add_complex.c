#include <stdio.h>
struct C{float r,i;};int main(){struct C a,b,s;scanf("%f%f%f%f",&a.r,&a.i,&b.r,&b.i);s.r=a.r+b.r;s.i=a.i+b.i;printf("%.1f+%.1fi",s.r,s.i);return 0;}