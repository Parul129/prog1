#include<stdio.h>
void main()
{
int n,d,count=0;
clrscr();

printf("Enter the number: ",n);
scanf("%d",&n);
	while(n!=0)
	{
	  n=n/10;
	  ++count;
	}

printf("Number of digits in a number: %d",count);
getch();
}