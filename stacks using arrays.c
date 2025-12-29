#include<stdio.h>
#include<stdlib.h>
#define size 20
int top=-1,stack[size],ch,ele,i;
void push();
void pop();
void display();
main()
{
  printf("\n\t\t MAINMENU");
  printf("\n\t 1.PUSH");
  printf("\n\t 2.POP");
  printf("\n\t 3.DISPLAY");
  printf("\n\t 4.EXIT\n");
  do
	{
	  printf("Enter ur choice : ");
	  scanf("%d",&ch);
	  switch(ch)
	  {
		case 1 : push();  break;
		case 2 : pop();  break;
		case 3 : display();  break;
		case 4 : exit(0);
	  }
	}while(ch<=4);
}
void push()
{
	if(top==(size-1))
	{
		printf("Stack is full\n");
	}
	else{
		printf("Enter the elements : ");
		scanf("%d",&ele);
		top++;
		stack[top]=ele;	
	}
}
void pop()
{
	if(top==-1)
	{
		printf("Stack is empty\n");
	}
	else{
		ele=stack[top];
		printf("Deleted element is : %d\n",ele);
		top--;
	}
}
void display()
{
	if(top==-1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		for(i=top;i>=0;i--)
		printf("\t\t%d\n",stack[i]);
	}
}














