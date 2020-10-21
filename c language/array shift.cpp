#include<stdio.h>
main()
{
	int a[6],i;
	for(i=0;i<6;i++)
	{
	printf("Enter Value of cell %d : ",i+1);
	scanf("%d",&a[i]);
	}
	for(i=6;i>=1;i--)
	{
		a[i]=a[i-1];
	}
	for(i=0;i<=6;i++)
	{
		printf("Value of cell %d is %d\n",i+1,i);
	}
}
