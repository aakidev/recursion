#include<stdio.h>
int main()
{	int fibo(int);
	int a,i;
	printf("Enter Nth position of series : ");
	scanf("%d",&a);
	for(i=0;i<20;i++)
	{	if(i==a)
	printf("%d",fibo(i));}
	return 0;
}
int fibo(int a)
{
	if(a==0 ||a ==1)
		return a;
	else
		return (fibo(a-1)+fibo(a-2));
}
