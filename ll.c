#include<stdio.h>
#include<stdlib.h>
struct book
{
	int id;
	struct book *next;
};
void revprint(struct book *start);
struct book *create(struct book *start);
struct book *add(struct book *start,int data);
struct book *adv(struct book *start,int data);
int main()
{
	struct book *start =NULL;
	int data;
	start=create(start);
	revprint(start);
}
struct book *create(struct book *start)
{
	int i,n,data;
	printf("enter number of nodes: ");
	scanf("%d",&n);
	start=NULL;
	if(n==0)
		return start;
	printf("\nEnter Element :");
	scanf("%d",&data);
	start=add(start,data);
	for(i=2;i<=n;i++)
	{
		printf("\nEnter Element :");
        scanf("%d",&data);
        start=adv(start,data);
	}
	return start;
}
struct book *adv(struct book *start,int data)
{
	struct book *p,*tmp;
	tmp=(struct book *)malloc(sizeof(struct book));
	tmp->id=data;
	p=start;
	while(p->next!=NULL)
		p=p->next;
	p->next=tmp;
	tmp->next=NULL;
	return start;
}
struct book *add(struct book *start,int data)
{
        struct book *tmp;
        tmp=(struct book *)malloc(sizeof(struct book));
        tmp->id=data;
        tmp->next=start;
	start=tmp;
        return start;
}
void revprint(struct book *start)
{
	if(start==NULL)
		return ;
	revprint(start->next);
	printf("->%d",start->id);
}
