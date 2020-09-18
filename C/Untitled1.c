#include<stdio.h>
main()
int SWAP(int,int);
{
    int a,b;
    printf("Enter the values of a & b");
    scanf("%d%d",&a,&b);
    printf("Before Swap a=%d b=%d",a,b);
    SWAP(a,b);
}
int SWAP(int a,int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    printf("After Swap a=%d b=%d",a,b);
}
