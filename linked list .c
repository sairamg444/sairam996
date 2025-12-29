#include<stdio.h>
#include<stdlib.h>
struct node
{
	int n;
	struct node *next;
}*p,*q,*head='\0';
int main()
{
	int no,i,ch;
	printf("Enter no of nodes : ");
	scanf("%d",&no);
	for(i=0;i<no;i++)
	{
		p=(struct node*)malloc(sizeof(struct node));
		printf("Enter the node data : ");
	    scanf("%d",&p->n);
	if(head=='\0')
	{
	p->next ='\0';
	head=p;
	q=p;
    }
    else
    {
    	q->next=p;
    	p->next='\0';
    	q=p;
    }
	}
display();
do{
	int ch;
	printf("\n\t\t MAINMENU");
	printf("\n\t 1.INSERETBEG");
	printf("\n\t 2.INSERTPOS");
	printf("\n\t 3.INSERTEND");
	printf("\n\t 4.DELETEBEG");
	printf("\n\t 5.DELETEPOS");
	printf("\n\t 6.DELETEEND");
	printf("\n\t 7.EXIT");
	printf("Enter ur choice :");
	scanf("%d",&ch);
	switch(ch)
	{
case 1: insertbeg();
break;
case 2: insertpos();
break;
case 3: insertend();
break;
case 4: deletebeg();
break;
case 5: deletepos();
break;
case 6: deleteend();
break;
case 7: exit(0);
break;
}
while(ch<=7);
}	
display()
{
	if(head=='\0')
	printf("List is empty");
	else
	{
	printf("The list is : \n");
	q=head;
	while(q!='\0')
	{
		printf("%d->",q->n);
		q=q->next;
	}
	printf("NULL");
    }
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
    
    
    
    
    

