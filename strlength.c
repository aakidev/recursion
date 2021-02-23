#include<stdio.h>
int main()
{	int a;
	char s[30];
	printf("Enter String \n");
	scanf("%s",s);
	a=strlength(s);
	printf("string length is : %d",a);
}
int strlength(char *s)
{	int a=1;
	if(*s=='\0')
		return 1;
	else
		return(a+strlength(s+1));
}
