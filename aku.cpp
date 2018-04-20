#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
struct node
{

	char query[100];
	int time;
	struct node *next;
}*head;
struct node *temp, *newnode;
struct node *p;
int max=120; int status=0;
int curr=0;
int solved=0;
void create()
{
	
	head=NULL;
	if(head==NULL)
	{
		head=(struct node*)malloc(sizeof(struct node));
		printf("Enter the query \n");
		scanf("%s",&head->query);
		printf("Enter the time required to solve the query in minutes  should be within 10 min\n");
		scanf("%d",&head->time);
		curr=curr+head->time;
		head->next=NULL;
		temp=head;
		status++;
	}
	else
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter the query \n");
		scanf("%s",&newnode->query);
		printf("Enter the time required to solve the query in minutes should be within 10 min\n");
		scanf("%d",&newnode->time); curr=curr+newnode->time;
		newnode->next=NULL;
		temp->next=newnode;
		temp=newnode;
		status++;
	}
}
int stat;
void display()
{
	p=head;
	while(p!=NULL)
	{ 
	if(p->time>0)
	solved++;
		p=p->next;
	}
}
int main()
{
	int a;
	int b;
	int flag;
	printf("If you are a student press 0 \n If you are a faculty press 1 \n");
	scanf("%d",&b);
	if(b==0)
	{
	printf("How many queries you have \n");
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
	create();
}}
else
{
	printf("How many queries you have \n");
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
	create();
}}
while(true)
{
printf("Do you wish to add more queries \n Enter 0 for YES and 1 for NO \n");
scanf("%d",&flag);
if(flag==0)
{
		printf("If you are a student press 0 \n If you are a faculty press 1 \n");
	scanf("%d",&b);
	if(b==0)
	{
	printf("How many queries you have \n");
	scanf("%d",&a);
	for(int j=1;j<=a;j++)
	{
	create();
}}
else
{
	printf("How many queries you have \n");
	scanf("%d",&a);
	for(int j=1;j<=a;j++)
	{
	create();
}}
}
else
break;
}
for(int k=0;k<status;k++)
{
	display();

}	printf("Total no of queries solved =%d\n",solved);
printf("Total no of queries 0 =%d\n",status);
printf("Total no of time taken =%d\n",curr);
	return 0;
}
