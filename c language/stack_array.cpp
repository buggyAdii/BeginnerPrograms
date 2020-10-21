#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100 
int a[100],top;
 
void push();
int  pop();
void display();
 
int main ()
{
    int choice;
    int option = 1;
    top = -1;
 
    printf ("STACK OPERATION\n");
    while (option)
    {
        printf (" ------------------------------------------\n");
        printf ("|     1    -->    PUSH                    |\n");
        printf ("|     2    -->    POP                     |\n");
        printf ("|     3    -->    DISPLAY                 |\n");
        printf ("|     4    -->    EXIT                    |\n"); 
        printf (" ------------------------------------------\n");
 
        printf ("Enter your choice\n");
        scanf    ("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
        	exit(0);
        }
        printf("Do you want to continue(Type 0 or 1)?\n");
        scanf("%d", &option);
    }
}
void push ()
{
    int num;
    if (top == (MAXSIZE - 1))
    {
        printf ("Stack is Full\n");
    }
    else
    {
        printf ("Enter the element to be pushed\n");
        scanf ("%d", &num);
        top = top + 1;
        a[top] = num;
    }
}
int pop ()
{
    int num;
    if (top == - 1)
    {
        printf ("Stack is Empty\n");
        return (top);
    }
    else
    {
        num = a[top];
        printf("Poped element is = %d\n", a[top]);
        top = top - 1;
    }
    return(num);
}

void display ()
{
    int i;
    if (top == -1)
    {
        printf ("Stack is empty\n");
    }
    else
    {
        printf ("\n The status of the stack is \n");
        for (i = top; i >= 0; i--)
        {
            printf ("%d\n", a[i]);
        }
    }
    printf ("\n");
}
