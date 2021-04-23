#include<stdio.h>
void main()
{
int n,fd,ld,sum=0;
clrscr();

printf("Enter the number: ",n);
scanf("%d",&n);

	ld=n%10;

	while(n>=10)
	{
	n=n/10;
	}
	fd=n;

	sum=fd+ld;
printf("Sum of its first digit %d and last digit %d is: %d",fd,ld,fd+ld,sum);
getch();
}