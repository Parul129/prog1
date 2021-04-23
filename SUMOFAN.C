#include<stdio.h>
void main()
{
int i;
long n,sum=0;
clrscr();

printf("Enter the number: ");
scanf("%ld",&n);

	for(i=0;i<n;++i)
	{
	sum=sum+i;
	}

printf("Sum of all numbers between 1 to %d is: %ld",n,sum);
getch();
}