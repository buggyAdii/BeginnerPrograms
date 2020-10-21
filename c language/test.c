#include<stdio.h>
main()
{
    int X=3521,Y=0;
    while(X!=0)
    {
        Y=(Y*10)+(X%10);
        X=X/10;
    }
    printf("%d",Y);
}
