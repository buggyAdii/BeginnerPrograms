#include<stdio.h>
int a[100];
int i,n;
void read()
{
	printf("Range");
	scanf("%d",&n);
	printf("Enter the elements in the array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
}
void deletion()
{
	int pos;
	printf("POS: ");
	scanf("%d",&pos);
	for(i=pos-1;i<n;i++)
	a[i]=a[i+1];
}
main()
{
	read();
	deletion();
	printf("The new array: \n");
	for(i=0;i<n-1;i++)
	printf("%d",a[i]);
}
