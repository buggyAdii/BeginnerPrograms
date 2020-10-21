#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
struct stack
{
    char stk[MAXSIZE];
    int top;
}st;
void push (char c)
{
    st.top = st.top + 1;
    st.stk[st.top] = c;
}
void display ()
{
	int i=0;
    printf ("\nThe converted string is\n");
    for (i = 0; i <= st.top ; i++)
    	{
            printf ("%c", st.stk[i]);
        }
    printf ("\n");
}
int main()
{
	char s[100],c;
	int j=0;
	int n;
	st.top=-1;
	printf("Enter the string to reverse: ");
	gets(s);
	while(s[j]!=NULL)
	{
		n++;
		j++;
	}
	while(n!=0)
	{
		c=s[j];
		push(c);
		n--;
		j--;
	}
	display();
//uts("Continue?? 0 or 1");
//canf("%d",
}
