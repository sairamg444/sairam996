#include <stdio.h>
int main() 
{
    int i,j;
    for(j=0;j<4;j++)
    {
       for(i=0;i<4;i++)
          {
            printf(" ");
          }
          for(j=0;j<=(2*i)-1;j++)
          
          {
          	printf("*");
		  }
          printf("\n");
    }
}
