#include<stdio.h>
int main()
{	int reint(int);
	int a;
	printf("enter number to reverse: ");
	scanf("%d",&a);
	printf("\nreverse is : ");
	reint(a);
	return 0;
}
int reint(int a)
{	
	if(a<10)
		printf("%d",a);
	else
	{
	printf("%d",a%10);
	reint(a/10);}
}
