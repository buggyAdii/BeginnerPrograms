//Time convertor
#include<stdio.h>
main()
{
int s,m,x,min,sec,hour;
printf("Choose Your Option:\n1.Minutes 2.Seconds\n");
scanf("%d",&x);
switch(x)
{
case 1:
    {
    printf("\nEnter The value: ");
    scanf("%d",&m);
    hour=m/60;
    min=m%60;
    printf("\n%d Hours %d Minutes",hour,min);
    break;
    }
case 2:
    {
    printf("Enter The Value: ");
    scanf("%d",&s);
    hour=s/3600;
    min=s%3600;
    sec=s%3600;
    printf("%d Hours %d Minutes %d seconds",hour,min,sec);
    break;
    }
default:
    printf("Fek auf");
}
}
