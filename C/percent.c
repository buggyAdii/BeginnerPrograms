#include<stdio.h>
main()
{
int s1,s2,s3,t,av;
float p;
printf("Enter The Marks:\nEnglish: ");
scanf("%d",&s1);
printf("Hindi: ");
scanf("%d",&s2);
printf("Maths: ");
scanf("%d",&s3);
t=s1+s2+s3;
printf("Total: %d\n",t);
if(s1<=40 || s2<=40 || s3<=40)
{
printf("You Failure, \nShame on You!\nYou need to give compartment.\n");
}
else
{
p=(float)t/300*100.0;
av=t/3;
printf("Average: %d\n",av);
printf("Your Percentage is %.2f%%\n",p);
if(av<=33)
{
    printf("You are 3rd\n");
}
else if(av>33 && av>=60)
{
    printf("You are second\n");
}
else if(av>60)
{
    printf("You are First\n");

}
else
    printf("Error\n");
}
}

