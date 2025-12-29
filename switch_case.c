#include <stdio.h>

int main() 
{
    char operator;
    scanf("%c",&operator);
    double n1,n2;
    scanf("%lf %lf",&n1,&n2);
    switch(operator)
    {
        case '+':
        printf("%.2f + %.2f = %.2f\n",n1,n2,n1+n2);
        break;
    default:
    if(n2!=0)
    {
        printf(".2f / %.2f = %.2f\n",n1,n2,n1/n2);
    }
    else{
        printf("Error");
    }
    }
    return 0;
}
