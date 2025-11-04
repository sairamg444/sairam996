#include <stdio.h>
int main(){int n,t,r=0;scanf("%d",&n);t=n;while(t){r=r*10+t%10;t/=10;}printf(n==r?"Palindrome":"Not Palindrome");return 0;}