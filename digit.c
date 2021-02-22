#include<stdio.h>
int main()
{
	int a,c;
	int digi(int);
	printf("Enter Digit \n");
	scanf("%d",&a);
	c=digi(a);
	printf("Total digit count is: %d \n",c);
	return 0;
}
int digi(int a)
{	int b;
	if(a<10)
		return 1;
	b=1;
	return (b+digi(a/10));
}


