#include<stdio.h>
main()
{
int a[5],i,j;
for(i=0;i<=4;i++)
{
printf("Enter Values Of cell %d: ",i+1);
scanf("%d",&a[i]);
printf("You Entered %d\n",a[i]);
}
for(i=0;i<=4;i++)
{
printf("\nThe Value of cell %d is %d\n",i+1,a[i]);
}
}
