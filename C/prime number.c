#include<stdio.h>
main()
{
    int a,i,c=0;
    printf("Enter A number");
    scanf("%d",&a);
    if(a==0)
    {
     printf("the number is not prime");
    }
    else
    {
        for(i=2;i<a;i++)
        {
            if(a%i==0)
                c++;
        }
        if(c>0)
        {
            printf("The  no. is not prime");
        }
        else
        {
            printf("The number is prime");
        }
    }
}
