#include<stdio.h>
#include<string.h>
int main()
{
    char str[30]="";
    do
    {
	printf("输入密码:");
	scanf("%[^\n]",str);
	getchar();
    }while(strcmp(str,"不好意思!"));
    printf("密码正确\n");
    return 0;
}
