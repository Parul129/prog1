/* Get the number from user and the output is reverse */

#include<stdio.h>
void main()
{
int m,n,r=0;
clrscr();
printf("Enter th number:",n);
scanf("%d",&n);

	while(n!=0)
	{
	m=n%10;
	r=r*10+m;
	n=n/10;
	}
printf("Reverse Number is: %d",r);

getch();
}