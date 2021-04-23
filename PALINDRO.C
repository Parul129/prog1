#include<stdio.h>
void main()
{
int n,m,rev=0,temp=0;
clrscr();

printf("Enter the number: ",n);
scanf("%d",&n);
temp=n;
	while(n!=0)
	{
	m=n%10;
	rev=rev*10+m;
	n=n/10;
	}
		if(temp==rev)
		{
		printf("Palindrome no");
		}
		else
		{
		printf("Not a Palindrome no");
		}
getch();
}