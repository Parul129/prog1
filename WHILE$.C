#include<stdio.h>
void main()
{
char ch=' ';
clrscr();

printf("Enter any char to continue.. ($) to exit. :");

	for(;ch!='$';) //acting as while loop
	{
	ch=getch();
	putch(ch); //printf("%c",ch);
	}

getch();
}