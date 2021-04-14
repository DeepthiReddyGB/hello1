#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "foo.h"
int m;


int main()
{
nodetype* left=NULL;
nodetype* right=NULL;
int ch,c;
printf("=============WELCOME TO OLX==========\n");
printf("enter 1 for insert\nenter 2 for sort\nenter 3 for exit");
do
{
printf("\nenter choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
right=insert(right);
if(left==NULL)
{
left=right;
}
break;
case 2: while(1)
       {
	printf("\n 1.sort by price\n2.sort by year \n3.sort by name\n4.price dec sort\n5.exit;");
	scanf("%d",&m);
	switch(m)
	{
	case 1 : sort(left);
		break;
	case 2 : sortyear(left);
		break;

	case 3 : sortname(left);
		break;
	case 4 : desd(left);
		break;
	case 5 :	 exit(0);

	default : printf("invalid option");
	}
	}
case 3:
exit(1);
break;
default:
printf("invalid choice");
break;
}
printf("do u want continue press1:\n");
scanf("%d",&c);
}while(c==1);
getch();
}
nodetype* insert(nodetype *r)
{
int n;
nodetype *p;
p=(nodetype*)malloc(sizeof(nodetype));
printf("\nenter the name:\n");
scanf("%s",p->name);
printf("\nenter the colour:\n");
scanf("\t%s",p->colour);
printf("\nenter the price:\n");
scanf("%d",&n);
printf("enter the year:\n");
scanf("%d",&p->year);
if(p!=NULL)
{
p->info=n;
p->next=NULL;
if(r==NULL)
{
r=p;
}
else
{
r->next=p;
r=p;
}
return(r);
}
else
{
printf("not enough memory\n");
}

void sort(nodetype*);
void desd(nodetype*);
void sortyear(nodetype*);
void sortname(nodetype*);
void sortcolour(nodetype*);

return 0;



getch();
}