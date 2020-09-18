#include <stdio.h>
main()
{
    int a,num0,num1,add,sub;
    printf("Enter Two Numbers");
    scanf("%d %d",&num0,&num1);
    printf("Enter Operation:\n 1. add 2. Substract\n");
    scanf("%d",&a);
    switch(a)
    {
case 1:
    add=num0+num1;
    printf("The answer is %d",add);
    break;
case 2:
    sub=num0-num1;
    printf("The answer is %d",sub);
    break;
default:
    printf("Wrong Input");
    }

}
