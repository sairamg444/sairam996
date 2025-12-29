#include<stdio.h>
#include<stdlib.h>
#define NODE struct node
node
{
	int n;
	node *next;
};
node *p,*q,*head='\0';
int main()
{
int no,i,ch;
printf("Enter no of nodes : ");
scanf("%d",&no);
for(i=0;i<no;i++)
{
	p=(node*)malloc(sizeof(node));
	printf("Enter the node data : ");
	scanf("%d",&p->n);
	p->next='\0';
	if(head=='\0')
	{
		head=p;
		q=p;
	}
	else
	{
		q->next=p;
		q=p;
	}
}
display();
do
{
printf("\n\t\t MAINMENU");
printf("\n\t 1.INSERTBEG");
printf("\n\t 2.INSERTPOS");	
printf("\n\t 3.INSERTEND");
printf("\n\t 4.DELETEBEG");
printf("\n\t 5.DELETEPOS");	
printf("\n\t 6.DELETEEND");
printf("\n\t 6.DELETEEND");
printf("\n\t 7.EXIT");
printf("Enter your choice : ");
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
while(ch<=7);}
display(){
	if(head=='\0')
	printf("Linked list is empty :");
	else
	{
		printf("\nLIST is : \n");
		q=head;
		while(q!='\0)
		{
			printf("%d->",q->n);
			q=q->next;
		}
		printf("null");
	}
}
	insertbag(){
		printf("\nInserting at the beginning :");
		p=(node*)malloc(sizeof(node));
		printf("\n Enter node data : ");
		scanf("%d",&p->n);
		p->next=head;
		head=p;
		display();}
		insertpos()
		{
			int pos,i;
			printf("\nInserting at any position : ");
			p=(node*)malloc(sizeof(node));
			printf("\nEnter node data : ");
			scanf("%d",*p->n);
			printf("Enter position : ");
			scanf("%d",&pos);
			q=head;
			for(i=1;i<pos-1;i++)
			{
				q=q->next;
			}
			p->next=q->next;
			q->next=p;
			display();
		}
		deletebeg(){
			if(head=='\0')
			printf("Linked list is empty : ");
			else
			{
				printf("\nDeletion at the biginning : ");
				p=head;
				head=p->next;
				free(p);
				display();
			}
		}
		deletepos()
		{
			int pos,i;
			if(head='\0')
		}
	}

