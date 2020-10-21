#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<conio.h>
void append();
void del_beg();
void display();
void del_end();
void add_beg();
void length();
void search();
void insertanypos();
void deleteanypos();
struct node
{
	int data;
	struct node *link;
}*head;

int main()
{
	int ch;
	while(1){
		printf("\nEnter Choice\n1.Insert at Front\t2.Insert at End\t\n3.Delete from Front\t4.Delete from End\t\n5.Display\t\t6.Search\t\n7.Delete from any position\t8.Insert at any position\n9.Length\n");
		scanf("%d",&ch);
	switch(ch)
		{
		case 1:
			add_beg();
			break;
		case 2:
			append();
			break;
		case 3:
			del_beg();
			break;
		case 4:
			del_end();
			break;
		case 5:
			display();
			break;
		case 6:
			search();
			break;
		case 7:
			deleteanypos();
			break;
		case 8:
			insertanypos();
			break;
		case 9:
			length();
			break;
		default:
			puts("Error/nTry Again\n\n");
			main();
		}
	}
	return 0;
}
void append()
{
	struct node *tmp,*p;
	tmp=(struct node *)malloc(sizeof(struct node));
	printf("Enter Node: ");
	scanf("%d",&tmp->data);
		tmp->link=NULL;
		if(head==NULL)
			head=tmp;
		else
		{
			p=head;
			while(p->link!=NULL)
				p=p->link;
			p->link=tmp;
		}
		display();
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
void del_end()
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
	}
	free(temp);
	display();
	
	}
void del_beg()
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
	main();
}
void add_beg()
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	int val;
	puts("\nEnter The node value: ");
	scanf("%d",&val);
	temp->data=val;
	temp->link=head;
	head=temp;
	display();
}
void length()
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp=head;
	int count=0;
	if(head==NULL)
	printf("Empty");
	else{
	while(temp->link!=NULL)
	{
		temp=temp->link;
		count++;
	}
	printf("The length is :%d \n",count+1);
	}
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
    printf("The value is present at index: %d",index);
    else
    puts("Not found in list");
}
void insertanypos()
{
    int i,data,position;
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));
	puts("Enter Element to insert: ");
	scanf("%d",&data);
	puts("Enter Location to insert: ");
	scanf("%d",&position);
    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->data = data;
        newNode->link = NULL;
        temp = head;
        for(i=2; i<=position-1; i++)
        {
            temp = temp->link;

            if(temp == NULL)
                break;
        }

        if(temp != NULL)
        {

            newNode->link = temp->link; 

            temp->link = newNode;

            printf("DATA INSERTED SUCCESSFULLY\n");
        }
        else
        {
            printf("UNABLE TO INSERT DATA AT THE GIVEN POSITION\n");
        }
    }
    display();
}
void deleteanypos()
{
    int i,position;
    struct node *toDelete, *prevNode;
puts("Enter position to delete: ");
scanf("%d",&position);
    if(head == NULL)
    {
        printf("List is already empty.");
    }
    else
    {
        toDelete = head;
        prevNode = head;

        for(i=2; i<=position; i++)
        {
            prevNode = toDelete;
            toDelete = toDelete->link;

            if(toDelete == NULL)
                break;
        }
        if(toDelete != NULL)
        {
            if(toDelete == head)
                head = head->link;
            prevNode->link = toDelete->link;
            toDelete->link = NULL;
            free(toDelete);

            printf("SUCCESSFULLY DELETED NODE FROM MIDDLE OF LIST\n");
        }
        else
        {
            printf("Invalid position unable to delete.");
        }
    }
}
