#include<stdio.h>
main (){int a[5],i;for(i=0;i<5;i++){printf("Enter %d cell Value:",i+1);scanf("%d",&a[i]);}for(i=0;i<5;i++){printf("\nThe Value of %d cell is %d",i+1,a[i]);printf("\nThe address of %d cell is %u",i+1,&a[i]);}
}
