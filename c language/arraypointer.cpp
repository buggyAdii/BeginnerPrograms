#include<stdio.h>
main()
{
	int i, a[10];
	printf("input 10 elements of the array: ");
	for(i=0;i<10;i++)
	scanf("%d",a+i);
	printf("The Elements after Reversion:\n ");
	printf("The elements in reverse order\n");
	for(i=9;i>=0;i--)
	printf(" %d\t", *(a+i));
}
