#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<malloc.h>
struct node
{
int data;
struct node *next;
};
struct node *head=NULL;
struct node *p,*nw,*q;

ins_beg(int val)
{
	nw=((struct node*)malloc(sizeof(struct node)));
	nw->data=val;
	nw->next=NULL;
	if(head==NULL)
	head=nw;
	else
		{
			nw->next=head;				
			head=nw;
		}
}	
ins_end(int val)
{
	nw=((struct node*)malloc(sizeof(struct node)));
	nw->data=val;
	nw->next=NULL;
	p=head;
	while(p->next!=NULL)
		{
		p=p->next;
		p=nw;
		}
}
del_beg()
{
	p=head;
	struct node *q=p;
	p=p->next;
	if(head==NULL)
		{
		printf("Deletion is not possible empty list");
		return 0;
		}
		else
	{
		head=p;
		int x;
		x = q -> data;
		free(q);
		return x;
	}
}
del_end()
{
p=head;
struct node *q=p;
if(head==NULL)
{
printf("Deletion is not possible empty list");
return 0;
}
else
{
while(p!=NULL)
{
q=p;
p=p->next;
}
q->next=NULL;
int x=p->data;
free(p);
return x;
}
}
display()
{
printf("The linked list is\n");
p=head;
q=p;
while(p!=NULL)
{
q=p;
printf("%d\t",q->data);
p=p->next;
}
printf("\n");
}


main()


{
int ch,val,pos;
while(1)
{
printf("Enter choice for operation in linked list:\n 1.Insertion at beginning\n 2.Insertion at end\n 3.Deletion from beginning\n 4.Deletion from end\n 5.Displaying the linked list\n 6.Exit from list\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
	printf("Enter the value to enter\n");
	scanf("%d",&val);
	ins_beg(val);
	break;
case 2:
	printf("Enter the value to insert\n");
	scanf("%d",&val);
	ins_end(val);
	break;
case 3:
	val=del_beg();
	printf("The deleted value is %d",val);
	break;
case 4:
	val=del_end();
	printf("The Deleted Value is %d",val);
	break;
case 5:
	display();
	exit(0);
case 6:
	printf("End Of List\n");
	exit(0);
default:
	printf("Fakaf");
}
} 
}
