#include<stdio.h>
int SWAP(int*,int*);
main()
{
    int a,b;
    printf("Enter the values of a & b\n");
    scanf("%d %d",&a,&b);
    printf("Before Swap a=%d b=%d\n",a,b);
    SWAP(&a,&b);
}
int SWAP(int *a,int *b)
{
    int *t;
    t=a;
    a=b;
    b=t;
    printf("After Swap a=%d b=%d\n",a,b);
}

