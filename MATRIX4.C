#include<stdio.h>
void main()
{
int i;
char ch='A';
clrscr();
	for(i=1;i<=16;i++)
	{
	printf("%c",ch);
		if(i%3==0)
		{
		ch++;
		}
		if(i%4==0)
		{
		printf("\n");
		ch='A';
		}
	}
getch();
}