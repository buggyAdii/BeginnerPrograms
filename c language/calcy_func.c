#include<stdio.h>
#include<stdlib.h>
int z;
ADD(int x,int y){
z=x+y;
return z;
}
SUB(int x,int y){
z=x-y;
return z;
}
MUL(int x,int y){
z=x*y;
return z;
}
DIV(int x,int y){
z=x/y;
return z;
}
main(){
int num0,num1,sw;
printf("Enter First Number: ");
scanf("%d",&num0);
printf("Enter Second Number: ");
scanf("%d",&num1);
reset:{
printf("\nEnter Your Choice:");
printf("\n1.Add 2.Substract 3.Multiply 4.Divide\n");
scanf("%d",&sw);
switch(sw){
case 1:
printf("\nThe answer is %d\n",ADD(num0,num1));
break;
case 2:
printf("\nThe answer is %d\n",SUB(num0,num1));
break;
case 3:
printf("\nThe answer is %d\n",MUL(num0,num1));
break;
case 4:
printf("\nThe answer is %d\n",DIV(num0,num1));
break;
default:
printf("\nWarning!!\nDon\"t mess with my code\n");
goto reset;
}
}
int k;
puts("\nEnter Choice: \n1. Continue: \t2. Restart \tX. Exit: ");
scanf("%d",&k);
if(k==1)
goto reset;
if(k==2)
return main();
else
exit(0);
}
