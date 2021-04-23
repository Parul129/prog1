#include<stdio.h>
void main()
{
char ch='A';
int i;
clrscr();
	for(i=1;i<=16;i++)
	{
	printf("%c",ch++);
		if(i%4==0)
		{
		ch='A';
		printf("\n");
		}
	}
getch();
}