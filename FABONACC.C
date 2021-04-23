#include<stdio.h>
void main()
{
int i,x,n,t1=0,t2=1;
clrscr();

printf("Enter the term: ");
scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
	printf("%d",t1);
	printf(", ");
	x=t1+t2;
	t1=t2;
	t2=x;

	}

getch();
}