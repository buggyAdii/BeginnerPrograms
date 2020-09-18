#include<stdio.h>
void name();
void show();
void test();
int main()
{
   printf("Enter your name = ");
   name();
   int a;
   scanf("%d",&a);
   test(a);

}
void name(){
	char str[10];
	gets(str);
	show(str);
}
void show(str){
	printf("Entered name = %s",str);	
}

void test(int a){
	printf("%d",a);
}
