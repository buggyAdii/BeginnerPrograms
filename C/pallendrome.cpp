#include<stdio.h>
main()
{
	int n,p=0,t;
	printf("Enter an integer to check Pallindrome: ");
	scanf("%d",&n);
	t=n;
	while(t!=0)
	{
		p=p*10; p=p+t%10; t=t/10;
	}
	if(n==p)
	printf("%d is Palindrome",n);
	else
	printf("%d is not Pallendrome",n);
	
	}
