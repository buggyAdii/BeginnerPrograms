#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void insert_front();
void insert_end();
void ins();
void delete_front();
void delete_end();
void del();
void search();
void display();
struct node
{
	int data;
	struct node *prev;
	struct node *link;
}*head;

int main()
{
	int ch;
	while(1)
	{
		puts("\nEnter The choice:\n");
		puts("1.Insert Front\t2.Insert End\t3.Insert any position");
		puts("4.Delete Front\t5.Delete End\t6.Delete any position");
		puts("7.Display\t8.Search");
		scanf("%d",&ch);
	switch(ch)
		{
		case 1:
			insert_front();
			break;
		case 2:
			insert_end();
			break;
		case 3:
			ins();
			break;
		case 4:
			delete_front();
			break;
		case 5:
			delete_end();
			break;
		case 6:
			del();
			break;
		case 7:
			display();
			break;
		case 8:
			search();
			break;
		default:
			puts("\nPlease Provide Valid Input");
		}
	}
}
void insert_front()
{	
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	int val;
	puts("\nEnter The node value: ");
	scanf("%d",&val);
	temp->data=val;
	temp->link=head;
	head=temp;
	temp->prev=head;
	display();
}
void insert_end()
{	
	struct node *tmp,*p;
	tmp=(struct node *)malloc(sizeof(struct node));
	printf("Enter Node: ");
	scanf("%d",&tmp->data);
		tmp->link=NULL;
		tmp->prev=NULL;
		if(head==NULL)
			head=tmp;
		else
		{
			p=head;
			while(p->link!=NULL)
				p=p->link;
			p->link=tmp;
			tmp->prev=p;
			tmp->link=NULL;
		}
		display();
} 
void ins()
{	
	int i,data,position;
    struct node *temp, *p;

    temp = (struct node*)malloc(sizeof(struct node));
	puts("Enter Element to insert: ");
	scanf("%d",&data);
	puts("Enter Location to insert: ");
	scanf("%d",&position);
    if(temp == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        temp->data = data;
        temp->link = NULL;
        temp->prev = NULL;
        p = head;
        for(i=2; i<=position-1; i++)
        {
            p = p->link;

            if(p == NULL)
                break;
        }

        if(p != NULL)
        {

            temp->link = p->link;
			temp->prev = p->prev; 
            p->link = temp;

            printf("DATA INSERTED SUCCESSFULLY\n");
        }
        else
        {
            printf("UNABLE TO INSERT DATA AT THE GIVEN POSITION\n");
        }
    }
    display();
}
void delete_front()
{
	struct node *tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp=head;
	if(head==NULL)
	puts("Empty list");
	else
		{
			head=head->link;
		}
	free(tmp);
	display();
}
void delete_end()
{
	struct node *temp,*p;
	temp=(struct node *)malloc(sizeof(struct node));
	temp=head;
	p=temp;
	if(temp==NULL)
	printf("\nEmpty list\n");
	else
	{
		while(temp->link!=NULL)
		{
		p=temp;
		temp=temp->link;
		}
		if(temp==head)
		head=NULL;
		else
		p->link=NULL;
		temp->link=NULL;
		temp->prev=NULL;
	}
	free(temp);
	display();
}
void del()
{
	int i,position;
    struct node *temp, *p;
puts("Enter position to delete: ");
scanf("%d",&position);
    if(head == NULL)
    {
        printf("List is already empty.");
    }
    else
    {
        temp = head;
        p = head;

        for(i=2; i<=position; i++)
        {
            p = temp;
            temp = temp->link;

            if(temp == NULL)
                break;
        }
        if(temp != NULL)
        {
            if(temp == head)
                head = head->link;
            p->link = temp->link;
            p->prev = temp->prev;
            temp->link = NULL;
            free(temp);

            printf("SUCCESSFULLY DELETED NODE FROM LIST\n");
        }
        else
        {
            printf("Invalid position unable to delete.");
        }
    }
    display();
}
void search()
{	
 	int index,key;
    struct node *temp;

    index = 0;
    temp = head;
puts("Enter Value to search");
scanf("%d",&key);
    while (temp != NULL && temp->data != key)
    {
        index++;
        temp = temp->link;
    }
    if(temp!=NULL)
    printf("\nThe value is present at index: %d",index);
	else
    printf("\nNot found in list");
    
}

void display()
{	
struct node *tmp;
	tmp=head;
	if(tmp==NULL)
		printf("\nEmpty list\n");
	else
		printf("\n");
	puts("The list is: ");
	while(tmp!=NULL)
	{
		printf("%d\t",tmp->data);
		tmp=tmp->link;
	}
	puts("\n");
	main();
}
