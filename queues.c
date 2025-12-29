#include <stdio.h>
int front=-1,rear=-1,max=10;
void insert_an_element()
{
	int queue[max];
	int num;
        printf("\n Enter the number to be inserted in the queue :");
             scanf("%d", &num);
            if(rear == max-1)
            printf("\n OVERFLOW");
            else if(front == -1 && rear == -1)
            front = rear = 0;
            else
            rear++;
            queue[rear] = num;
}
int main()
{
	int n;
	printf("1.Insert an element.");
	printf("2.Delete an element.");
	printf("3.Peek");
	printf("4.Display");
	scanf("%d",&n);
	switch(n){
		case 1:
			insert_an_element();
		case 2:
			//delete an element
		case 3:
			//peek
		case 4:
			//display	
	}
	
}

