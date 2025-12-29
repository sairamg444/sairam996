#include<stdio.h>
int main(){
	int n,x,sum=0;
	scanf("%d",&n);
	int temp=n;
	while(n>0){
		x=n%10;
		printf("%d\n",x);
		sum=sum+x;
		n=n/10;
	}
	printf("%d",sum);
}
