#include<stdio.h>
main()
{
	int a[8],i,a1[8];
	printf("Enter 8-bit binary: ");
	//for(i=0;i<8;i++)
	scanf("%d",a);
	for(i=0;i<8;i++)
{
a1[i]=a[i];
if(a1[i]==0)
a[i]=1;
else
a[i]=0;
}
printf("The binary in 1s is: ");
for(i=0;i<8;i++)
printf("%d",a[i]);
}

