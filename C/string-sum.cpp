#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int len,sum=0;
    puts("Enter string: ");
    scanf("%s", &str);
    len=strlen(str);
    sum=0;
    
    while(len--)
	{
		sum+= (str[len]-96);
        
    }
    printf("%d\n", sum);
    main();
}
