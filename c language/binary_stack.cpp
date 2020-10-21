#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
struct stack
{
    int stk[MAXSIZE];
    int top;
}s;
void push (int no)
{
    s.top = s.top + 1;
    s.stk[s.top] = no;
}
void display ()
{
	int i=0;
    printf ("\n The converted binary is \n");
    for (i = s.top; i >= 0; i--)
    	{
            printf ("%d", s.stk[i]);
        }
    printf ("\n");
}
int main()
{
	int n,no;
	s.top=-1;
	printf("Enter the number to convert ");
	scanf("%d",&n);
	while(n!=0)
	{
		if(n%2==0)
			{
				push(0);
				n=n/2;
			}
		else
		{
			push(1);
			n=n/2;
		}
	}
	display();
	int key;
puts("Continue?? 0 or 1");
scanf("%d",&key);
if(key==1)
main();
else
exit(0);
}
