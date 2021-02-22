#include<stdio.h>
int main()
{	
	int fact(int);
	int a,f;
	printf("enter no. to factorial\n");
	scanf("%d",&a);
	f=fact(a);
	printf("factorial of %d is %d\n",a,f);
	return 0;
}
int fact(int a)
{
	if(a==1)
		return 1;
	return (a*fact(a-1));
}
