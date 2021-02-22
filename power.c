#include<stdio.h>
int main()
{
	int a,p,r;
	int powe(int ,int);
	printf("Enter digit & power \n");
	scanf("%d%d",&a,&p);
	r=powe(a,p);
	printf("Result is : %d \n",r);
	return 0;
}
int powe(int a,int p)
{
	if(p<1)
		return 1;
	return(a*powe(a,(p-1)));
}
