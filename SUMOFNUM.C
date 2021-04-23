/* Get the number from user and the output is sum of number */

#include<stdio.h>
void main()
{
int m,n,sum=0;
clrscr();
printf("Enter the number:",n);
scanf("%d",&n);

	while(n!=0)
	{
	m=n%10;
	sum=sum+m;
	n=n/10;

	}
printf("Sum of Number is: %d",sum);

getch();
}