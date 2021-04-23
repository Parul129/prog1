/* Get the number from user and the output is highest digit */

#include<stdio.h>
void main()
{
int m,n,h=0;
clrscr();
printf("Enter the number:",n);
scanf("%d",&n);

	while(n!=0)
	{
	m=n%10;
		if(m>h)
		{
		h=m;
		}

	n=n/10;

	}
printf("Highest Number is: %d",h);

getch();
}