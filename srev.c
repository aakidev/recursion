#include<stdio.h>
int main()
	{
		char c[20];
		char srev(char *);
		printf("Enter string \n");
		scanf("%s",c);
		printf("\nstring is : %s\n",c);
		srev(c);
		return 0;
	}
char srev(char *s)
{
	if(*s)
	{		srev(s+1);
		printf("%c",*s);
	}
}
