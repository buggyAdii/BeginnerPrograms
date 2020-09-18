#include <stdio.h>
main()
{

    int y;
    printf("Enter The Year:");
    scanf("%d",&y);
    if(y%100==0)
    {
        if(y%400==0)
        {
            printf("Leap Year");
        }
        else
        {
            printf("Not Leap Year");
        }
    }
    else
    {
        if(y%4==0)
        {
            printf("Leap Year");
        }
        else
        {
            printf("Not Leap Year");
        }
    }
}
