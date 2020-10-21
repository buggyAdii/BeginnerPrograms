#include<stdio.h>
int i=0,j,n,ar[100];
bin()
{
	while(n!=0)
	{
		if(n%2==0)
		ar[i]=0;
		else
		ar[i]=1;
		n=n/2;
		i++;
	}
}
main()
{
	printf("Enter a number: ");
	scanf("%d",&n);
	bin();
	printf("The binary is ");
	for(j=i-1;j>=0;j--)
	printf("%d",ar[j]);
}
